// Fill out your copyright notice in the Description page of Project Settings.
#include "NaveEnemigaCazaBeta.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>


ANaveEnemigaCazaBeta::ANaveEnemigaCazaBeta()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Gravel.M_Ground_Gravel'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}

}
