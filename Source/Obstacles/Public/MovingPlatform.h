// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PiattaformaPluggata.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class OBSTACLES_API AMovingPlatform : public APiattaformaPluggata
{
	GENERATED_BODY()

	protected:
	
	UPROPERTY(VisibleAnywhere)
	float Time = 0;

	UPROPERTY(EditAnywhere)
	FVector InitialPosition;

	UPROPERTY(EditAnywhere)
	FVector TargetPosition;

	UPROPERTY(EditAnywhere)
	FVector TotalMovement;

	UPROPERTY(EditAnywhere)
	float Speed = 1;

	virtual void BeginPlay() override;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
