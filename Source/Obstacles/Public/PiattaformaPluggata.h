// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiattaformaPluggata.generated.h"

UCLASS()
class OBSTACLES_API APiattaformaPluggata : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiattaformaPluggata(); 

	UPROPERTY(EditAnywhere, Category = "components")
	UStaticMeshComponent* MeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	bool isEnabled;

	UPROPERTY(EditAnywhere)
	bool isVisible;

	UPROPERTY(EditAnywhere)
	bool isCheckpoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
