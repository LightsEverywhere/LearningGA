// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LearningGAPlayerState.h"
#include "AbilitySystem/LearningGAAbilitySystemComponent.h"




UAbilitySystemComponent* ALearningGAPlayerState::GetAbilitySystemComponent() const
{
	return LearningGAAbilitySystemComponent;
}
