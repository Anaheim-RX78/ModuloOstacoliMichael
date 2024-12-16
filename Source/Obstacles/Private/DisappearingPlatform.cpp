// Fill out your copyright notice in the Description page of Project Settings.


#include "DisappearingPlatform.h"

void ADisappearingPlatform::PlatformCycle()
{
	isEnabled = !isEnabled;

	// Update visibility state
	SetActorHiddenInGame(!isEnabled);
	SetActorEnableCollision(isEnabled);
}

void ADisappearingPlatform::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(timerPlatform, this, &ADisappearingPlatform::PlatformCycle, platformInterval, true);
}
