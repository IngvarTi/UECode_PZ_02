// Fill out your copyright notice in the Description page of Project Settings.

#include "PZ_Actor.h"

// Sets default values
APZ_Actor::APZ_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PawnCollision"));
	RootComponent = PawnCollision;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT(" BaseMesh "));
}

// Called when the game starts or when spawned
void APZ_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APZ_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

