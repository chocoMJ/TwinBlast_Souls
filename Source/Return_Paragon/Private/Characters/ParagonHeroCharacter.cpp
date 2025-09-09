// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ParagonHeroCharacter.h"

#include "ParagonDebugHelper.h"

void AParagonHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	Debug::Print(TEXT("Working"));
}
