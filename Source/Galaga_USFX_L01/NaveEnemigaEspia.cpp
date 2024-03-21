// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	// Obtiene la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	/*float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;*/

	// generate new X and Y coordinates so that the enemy ship moves from its current position to the bottom of the screen
	// Genera nuevas coordenadas X e Y para que la nave enemiga se mueva desde su posici�n actual hasta la parte inferior de la pantalla
	float NuevaX = -1000.0f * DeltaTime * velocidad;
	float NuevaY = 0.0f;


	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaEspia::Disparar()
{
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar()
{
}

void ANaveEnemigaEspia::Atacar()
{
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
