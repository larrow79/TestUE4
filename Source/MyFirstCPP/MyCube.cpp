// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCube.h"

// Sets default values
AMyCube::AMyCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UStaticMeshComponent* meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyCube"));
	RootComponent = meshComp;
	UStaticMesh* mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'")));
	meshComp->SetStaticMesh(mesh);
}

// Called when the game starts or when spawned
void AMyCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	this->AddActorLocalRotation(FRotator(0, 0.5f, 0));
	this->AddActorLocalRotation(FRotator(0, 0.0f, 1));
	//this->SetActorRelativeScale3D(FVector(2.2f));
}

