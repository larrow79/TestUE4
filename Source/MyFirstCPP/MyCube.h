// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCube.generated.h"

UCLASS()
class MYFIRSTCPP_API AMyCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCube();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="UINO")
	FString MyName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="UINO")
    FString YourName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="UINO")
    FString OtherName;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
