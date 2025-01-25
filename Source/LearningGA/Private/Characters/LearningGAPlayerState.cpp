// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LearningGAPlayerState.h"
#include "AbilitySystem/LearningGAAbilitySystemComponent.h"




ALearningGAPlayerState::ALearningGAPlayerState()
{
	LearningGAAbilitySystemComponent = CreateDefaultSubobject<ULearningGAAbilitySystemComponent>(TEXT("LearningGAAbilitySystemComponent"));

	LearningGAAbilitySystemComponent->SetIsReplicated(true);
	LearningGAAbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* ALearningGAPlayerState::GetAbilitySystemComponent() const
{
	return LearningGAAbilitySystemComponent;
}
