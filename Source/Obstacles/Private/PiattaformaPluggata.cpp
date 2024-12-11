// Fill out your copyright notice in the Description page of Project Settings.


#include "PiattaformaPluggata.h"

// Sets default values
APiattaformaPluggata::APiattaformaPluggata()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APiattaformaPluggata::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiattaformaPluggata::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
