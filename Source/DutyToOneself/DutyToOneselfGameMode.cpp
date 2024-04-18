// Copyright Epic Games, Inc. All Rights Reserved.

#include "DutyToOneselfGameMode.h"
#include "DutyToOneselfCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADutyToOneselfGameMode::ADutyToOneselfGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
