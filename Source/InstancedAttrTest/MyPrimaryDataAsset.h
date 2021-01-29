// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset.generated.h"

class UMyDataAsset;
/**
 * 
 */
UCLASS()
class INSTANCEDATTRTEST_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(Instanced,EditAnywhere)
    UMyDataAsset* MyDataAsset;
};
