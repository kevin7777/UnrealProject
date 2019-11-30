// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PTPlayerState.generated.h"

UCLASS()
class PT_API APTPlayerState : public APlayerState
{
	GENERATED_UCLASS_BODY()	

protected:
	virtual void OnRep_Score() override;

	virtual void OnRep_PlayerName() override;

	virtual void OnRep_bIsInactive() override;

	virtual void OnRep_PlayerId() override;

	virtual void OnRep_UniqueId() override;
};
