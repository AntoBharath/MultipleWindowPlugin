// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Rendering/SlateRenderer.h"
#include "Widgets/SWindow.h"
#include "Widgets/SWidget.h"
#include "Rendering/RenderingCommon.h"
#include "Blueprint/UserWidget.h"
#include "GenericPlatform/GenericWindow.h"
#include "Engine/Engine.h"
#include "Framework/Application/SlateApplication.h"


//-========================================================Construct Window with Given parameter's===================================================================


UMyBlueprintFunctionLibrary* UMyBlueprintFunctionLibrary::DrawWindow(
	UUserWidget* WindowWidget,
	FVector2D WindowResolution,
	bool HasWindowTitle,
	float Opacity,
	FText TitleBarName,
	bool Maximized,
	bool CanDrag
)
{

	//Define Required Objects

	UUserWidget* NewUserWidget = NULL;
	UMyBlueprintFunctionLibrary* WindowObject;
	WindowObject = NewObject<UMyBlueprintFunctionLibrary>();
	SWindow::FArguments WindowArgs;

	//End of define Req Objects



	//Set Window Initial Values
	WindowArgs.HasCloseButton(true)
		.ClientSize(WindowResolution)
		.Type(EWindowType::GameWindow)
		.CreateTitleBar(HasWindowTitle)
		.LayoutBorder(FMargin(0, 0, 0, 0))
		.IsInitiallyMaximized(Maximized)
		.bDragAnywhere(CanDrag)
		.SupportsTransparency(EWindowTransparency::PerWindow)
		.RenderOpacity(Opacity);
	

	//Construct Window Object
	TSharedRef<SWindow>NewWindow = SNew(SWindow);
	NewWindow->Construct(WindowArgs);


	//Set Title
	if (HasWindowTitle) { NewWindow->SetTitle(TitleBarName); }


	//Convert Given Widget to SlateUI
	if (WindowWidget)
	{
		if (WindowWidget != NULL)
		{
			NewUserWidget = WindowWidget;
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("New Widget Created!"));
		}
		else { GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Invalid Widget")); }
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Need Widget Class Refrence"));
		return NULL;
	}

	if (NewUserWidget != NULL)
	{
		TSharedPtr<SWidget>ConvertedWidget = NewUserWidget->TakeWidget();
		if (ConvertedWidget.IsValid())
		{
			NewWindow->SetContent(ConvertedWidget.ToSharedRef());
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("New Widget Converted!"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Widget Can't Convert"));
		}
	}
	//End Widget Convertion
	

	if (&NewWindow != nullptr && NewUserWidget != NULL)
	{
		

		//Set The Return Value
		WindowObject->WindowInfoStruct.CreatedWidget = NewUserWidget;
		WindowObject->WindowInfoStruct.Success = true;
		WindowObject->WindowInfoStruct.CreatedWindow = NewWindow;
		WindowObject->WindowInfoStruct.WindowObject = WindowObject;

		//Show the Window
			FSlateApplication::Get().AddWindow(WindowObject->WindowInfoStruct.CreatedWindow.ToSharedRef(), true);
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("New Window Created!"));

		//BindRequiredDelegates
		 
				// Bind Event On Destroyed

				WindowObject->OnClosed.BindUFunction(WindowObject, FName("CustomWindowDestroyed"), WindowObject);
				WindowObject->WindowInfoStruct.CreatedWindow->SetOnWindowClosed(WindowObject->OnClosed);
				//FCoreDelegates::OnExit.AddStatic(&UMyBlueprintFunctionLibrary::CustomWindowDestroyed);
				
		return WindowObject;
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Unable to Create New Window"));
	return NULL;
}



//-=========================================================Draw Window Function==================================================================


bool UMyBlueprintFunctionLibrary::WindowDrawnCallDelegate(UMyBlueprintFunctionLibrary* WindowObject)
{
	if (WindowObject != NULL)
	{
		//Call a Delegate
		if (WindowObject->OnWindowCreated.IsBound())
		{
			WindowObject->OnWindowCreated.Broadcast();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Broadcasting Delegate"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Nothing is Bound"));
		}
		return true;
	}
	return false;
}


//-===================================================Destroy Function========================================================================


bool UMyBlueprintFunctionLibrary::DestroyCreatedWindow(UMyBlueprintFunctionLibrary* WindowObject)
{
	if (WindowObject != nullptr)
	{
		if (WindowObject->WindowInfoStruct.CreatedWindow != NULL)
		{

			if (WindowObject->WindowInfoStruct.CreatedWindow.IsValid())
			{
				//WindowObject->WindowInfoStruct.CreatedWindow->RequestDestroyWindow();
				FSlateApplication::Get().DestroyWindowImmediately(WindowObject->WindowInfoStruct.CreatedWindow.ToSharedRef());

				if (WindowObject->OnWindowDestroyed.IsBound())
				{
					WindowObject->OnWindowDestroyed.Broadcast();
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("No Delegate Bound"));
				}
				WindowObject = nullptr;
				return true;
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("WindowAlreadyDestroyed"));
				return false;
			}
		}
	}
	return  false;
}


//-===========================================================================================================================




void UMyBlueprintFunctionLibrary::CustomWindowCreated()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Created"));
}


//-===========================================================================================================================
void UMyBlueprintFunctionLibrary::CustomWindowDestroyed()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Destroyed Window"));
	UE_LOG(LogTemp, Warning, TEXT("Game is exiting!"));
}
