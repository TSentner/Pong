// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Goal.generated.h"

UCLASS()
class PONG_API AGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoal(const FObjectInitializer& ObjectInitializer);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Set the X,Y, and Z scale for the sprite
	void SetScale(FVector& vector);

	// Set the position of the Goal
	void SetPosition(FVector& position);

	// Accessor for the width
	float GetWidth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	//Reference to the Sprite that represents a pong goal area
	class UPaperSpriteComponent* Sprite;
	
};
