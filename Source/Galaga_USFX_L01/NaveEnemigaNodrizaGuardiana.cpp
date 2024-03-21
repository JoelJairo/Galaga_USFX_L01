// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaGuardiana.h"


#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaNodrizaGuardiana::ANaveEnemigaNodrizaGuardiana()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}

