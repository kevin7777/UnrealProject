// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PTCharacterBase.generated.h"

UCLASS()
class PT_API APTCharacterBase : public ACharacter
{
	GENERATED_UCLASS_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void OnRep_Controller() override;

	virtual void OnRep_PlayerState() override;

	virtual void OnRep_IsCrouched() override;

	virtual void OnRep_ReplicatedBasedMovement() override;

	virtual void OnRep_ReplicatedMovement() override;
};
