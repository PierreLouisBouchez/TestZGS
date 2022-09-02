// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestZGSGameMode.h"
#include "TestZGSPawn.h"
#include "TestZGSHud.h"

ATestZGSGameMode::ATestZGSGameMode()
{
	DefaultPawnClass = ATestZGSPawn::StaticClass();
	HUDClass = ATestZGSHud::StaticClass();
}
