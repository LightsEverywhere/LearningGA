// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"

#include "AbilitySystemInterface.h"

#include "LearningGAPlayerState.generated.h"

class ULearningGAAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class LEARNINGGA_API ALearningGAPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;


public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Catagory = "Abilities")
	ULearningGAAbilitySystemComponent* LearningGAAbilitySystemComponent;
	
	
};
