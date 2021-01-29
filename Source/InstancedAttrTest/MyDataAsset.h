// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "MyBaseObject.h"
#include "Engine/DataAsset.h"
#include "MyDataAsset.generated.h"

/**
 * 
 */

UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class INSTANCEDATTRTEST_API UMyDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UMyBaseObject*> MyBaseObjects;

    UPROPERTY(EditAnywhere)
    float ExampleAttributeFloat = 1.0f;

    UPROPERTY(EditAnywhere)
    bool ExampleAttributeBool = false;
};
