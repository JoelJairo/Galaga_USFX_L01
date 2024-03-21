// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaPotenciada.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaNodrizaPotenciada::ANaveEnemigaNodrizaPotenciada()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}

