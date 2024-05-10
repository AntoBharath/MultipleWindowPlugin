// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericPlatform/GenericWindow.h"
#include "Delegates/Delegate.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */

class SWindow;
class UUserWidget;


USTRUCT(BlueprintType)
struct FOutValue
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	UMyBlueprintFunctionLibrary* WindowObject;

	UPROPERTY(BlueprintReadWrite, Category = "Runtime Window")
	bool Success = false;
	UPROPERTY(BlueprintReadOnly, Category = "Runtime Window")
	UUserWidget* CreatedWidget = NULL;

	TSharedPtr<SWindow> CreatedWindow;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowCreatedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowDestroyedDelegate);

DECLARE_MULTICAST_DELEGATE(FOnCreatedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnDestroyedDelegate);


UCLASS(BlueprintType)
class RUNTIMEMULTIPLEVIEWPORT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintAssignable, Category = "Runtime Window")
	FWindowCreatedDelegate OnWindowCreated;
	UPROPERTY(BlueprintAssignable, Category = "Runtime Window")
	FWindowDestroyedDelegate OnWindowDestroyed;

	UPROPERTY(BlueprintReadOnly, Category = "Runtime Window")
	FOutValue WindowInfoStruct;

	FOnWindowClosed OnClosed;

	UFUNCTION(BlueprintCallable, Category = "Runtime Window")
	static UMyBlueprintFunctionLibrary* DrawWindow(
		UUserWidget* CreatedWidget =  NULL,
		FVector2D WindowResolution = FVector2D(1280,720),
		bool HasWindowTitle = true,
		float Opacity = 1.0f,
		FText TitleBarName = FText::GetEmpty(),
		bool Maximized = false,
		bool CanDrag = true
	);

	UFUNCTION(BlueprintCallable, Category = "Runtime Window")
	static bool WindowDrawnCallDelegate(UMyBlueprintFunctionLibrary* WindowObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Window")
	static bool DestroyCreatedWindow(UMyBlueprintFunctionLibrary* WindowObject);

	UFUNCTION(BlueprintCallable, Category = "Runtime Window")
	static void CustomWindowCreated();
	UFUNCTION(BlueprintCallable, Category = "Runtime Window")
	static void CustomWindowDestroyed();
	

};