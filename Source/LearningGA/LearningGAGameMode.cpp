// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningGAGameMode.h"
#include "LearningGACharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearningGAGameMode::ALearningGAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
