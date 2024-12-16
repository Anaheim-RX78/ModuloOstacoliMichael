// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter.h"
#include "GameFramework/Character.h"

void ATeleporter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor))
	{
		PlayerCharacter->SetActorLocation(teleportLocation);
	}
}

void ATeleporter::BeginPlay()
{
	Super::BeginPlay();
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	MeshComponent->SetGenerateOverlapEvents(true);
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter::OnOverlapBegin);
}
