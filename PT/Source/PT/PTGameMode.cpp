// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PTGameMode.h"
#include "PTCharacter.h"
#include "UObject/ConstructorHelpers.h"

APTGameMode::APTGameMode(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
