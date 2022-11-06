// Copyright Epic Games, Inc. All Rights Reserved.

#include "WaterWorldGameMode.h"
#include "WaterWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWaterWorldGameMode::AWaterWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
