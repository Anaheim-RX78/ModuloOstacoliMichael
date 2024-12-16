// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PiattaformaPluggata.h"
#include "TimerManager.h"
#include "DisappearingPlatform.generated.h"


/**
 * 
 */
UCLASS()
class OBSTACLES_API ADisappearingPlatform : public APiattaformaPluggata
{
	GENERATED_BODY()

	protected:
	
	UPROPERTY(EditAnywhere)
	float platformInterval;

	FTimerHandle timerPlatform;

	virtual void PlatformCycle();

	virtual void BeginPlay() override;
};
