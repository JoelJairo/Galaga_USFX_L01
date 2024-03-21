// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaCamuflada.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>

ANaveEnemigaEspiaCamuflada::ANaveEnemigaEspiaCamuflada()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
}


	