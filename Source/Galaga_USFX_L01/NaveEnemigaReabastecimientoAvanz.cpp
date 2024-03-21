// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoAvanz.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaReabastecimientoAvanz::ANaveEnemigaReabastecimientoAvanz()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}
