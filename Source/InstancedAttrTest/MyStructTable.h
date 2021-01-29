// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "MyBaseObject.h"
#include "MyDataAsset.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "MyStructTable.generated.h"

USTRUCT(BlueprintType)
struct FMyStructTableRowProperties : public FTableRowBase
{
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere)
	float MyFloat = 1.0f;;

	UPROPERTY(EditInstanceOnly)
	UMyDataAsset * TestAssets;
};

USTRUCT(BlueprintType)
struct FMyStructTableRow : public FTableRowBase
{
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere)
	float ExampleAttributeFloat = 1.0f;

	UPROPERTY(EditAnywhere)
	bool ExampleAttributeBool = false;

	UPROPERTY(EditAnywhere, Instanced)
	TArray<UMyBaseObject*> MyBaseObjects;

	UPROPERTY(EditInstanceOnly)
	FMyStructTableRowProperties StructTableRowProperties;

};

/**
 * 
 */
UCLASS()
class INSTANCEDATTRTEST_API UMyStructTable : public UObject
{
	GENERATED_BODY()
	
};
