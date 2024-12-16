// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PiattaformaPluggata.h"
#include "Teleporter.generated.h"

/**
 * 
 */
UCLASS()
class OBSTACLES_API ATeleporter : public APiattaformaPluggata
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Teleporter")
	FVector teleportLocation;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void BeginPlay() override;
};
