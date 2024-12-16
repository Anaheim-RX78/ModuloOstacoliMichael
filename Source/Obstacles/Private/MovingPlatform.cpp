// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	InitialPosition = GetActorLocation();
	TargetPosition = GetActorLocation() + TotalMovement;
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Time += DeltaTime*Speed;

	float t = FMath::Sin(Time)*0.5f + 0.5f;

	SetActorLocation(FMath::Lerp(InitialPosition, TargetPosition, t));
}

