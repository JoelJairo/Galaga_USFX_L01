// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoDrone.h"
#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaReabastecimientoDrone::ANaveEnemigaReabastecimientoDrone()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Copper.M_Metal_Copper'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}


