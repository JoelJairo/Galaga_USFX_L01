// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaHackeadora.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaEspiaHackeadora::ANaveEnemigaEspiaHackeadora()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}

