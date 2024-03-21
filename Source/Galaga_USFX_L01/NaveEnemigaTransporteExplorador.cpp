// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteExplorador.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaTransporteExplorador::ANaveEnemigaTransporteExplorador()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}

