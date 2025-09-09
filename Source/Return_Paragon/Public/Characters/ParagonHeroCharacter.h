// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/ParagonBaseCharacter.h"
#include "ParagonHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RETURN_PARAGON_API AParagonHeroCharacter : public AParagonBaseCharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
