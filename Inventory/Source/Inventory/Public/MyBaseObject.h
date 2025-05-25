// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyBaseObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class INVENTORY_API UMyBaseObject : public UObject
{
	GENERATED_BODY()
	
public:

	class UWorld* GetWorld() const;

	class ULevel* GetLevel() const;
};
