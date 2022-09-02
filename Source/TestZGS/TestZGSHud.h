// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "TestZGSHud.generated.h"


UCLASS(config = Game)
class ATestZGSHud : public AHUD
{
	GENERATED_BODY()

public:
	ATestZGSHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
