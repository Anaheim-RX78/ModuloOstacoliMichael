// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/CapsuleComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS()
class OBSTACLES_API AObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacle();

	UPROPERTY(EditAnywhere, Category = "components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, Category = "components")
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere)
	float damage;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
