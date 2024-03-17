// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"


ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_90.Shape_Pipe_90'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaNodriza::Mover()
{
}

void ANaveEnemigaNodriza::Disparar()
{
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Escapar()
{
}

void ANaveEnemigaNodriza::Atacar()
{
}
