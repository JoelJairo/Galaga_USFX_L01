// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteRefuerzo.h"
#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaTransporteRefuerzo::ANaveEnemigaTransporteRefuerzo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Pine.M_Wood_Pine'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}

