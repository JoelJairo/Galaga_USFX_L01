// Fill out your copyright notice in the Description page of Project Settings.
#include "NaveEnemigaCazaAlfa.h"

#include "CoreMinimal.h"
#include <Components/LightComponent.h>


ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	// set the T_Wood_Oak_D texture from the StarterContent/textures folder to the Material of the StaticMeshComponent
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'"));
	if (Material.Succeeded())
	{
		mallaNaveEnemiga->SetMaterial(0, Material.Object);
	}
	
	
	

}
