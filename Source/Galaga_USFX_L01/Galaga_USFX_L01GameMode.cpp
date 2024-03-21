// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazaAlfa.h"
#include "NaveEnemigaCazaBeta.h"
#include "NaveEnemigaEspiaCamuflada.h"
#include "NaveEnemigaEspiaHackeadora.h"
#include "NaveEnemigaNodrizaGuardiana.h"
#include "NaveEnemigaNodrizaPotenciada.h"
#include "NaveEnemigaReabastecimientoAvanz.h"
#include "NaveEnemigaReabastecimientoDrone.h"
#include "NaveEnemigaTransporteExplorador.h"
#include "NaveEnemigaTransporteRefuerzo.h"



AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	 //Use a TArray to generate 30 NaveEnemiga's child classes objects randomly to be spawned in the game in a grid pattern
	TArray<ANaveEnemiga*> NavesEnemigas;
	NavesEnemigas.SetNum(30);
	for (int i = 0; i < 30; i++)
	{
		//Randomly generate the type of NaveEnemiga to be spawned
		int NaveEnemigaType = FMath::RandRange(0, 9);
		

		FVector NaveEnemigaPosition = FVector(1000 - (i / 10) * 200, -1000 + (i % 10) * 200, 150);
		
		


		//Randomly generate the rotation of the NaveEnemiga to be spawned
		FRotator NaveEnemigaRotation = FRotator(0, FMath::RandRange(0, 360), 0);

		// if a NaveEnemiga reaches the end of the grid, it has to be respawned at the beginning of the grid
		if (NaveEnemigaPosition.Y > 1000)
		{
			NaveEnemigaPosition.Y = -1000;
		}
		else
		{
			NaveEnemigaPosition.Y += 200;
		}
		//Spawn the NaveEnemiga in the game
		switch (NaveEnemigaType)
		{
		case 0:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaCazaAlfa>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 1:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaCazaBeta>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 2:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaEspiaCamuflada>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 3:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaEspiaHackeadora>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 4:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaNodrizaGuardiana>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 5:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaNodrizaPotenciada>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 6:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaReabastecimientoAvanz>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 7:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaReabastecimientoDrone>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 8:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaTransporteExplorador>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		case 9:
			NavesEnemigas[i] = GetWorld()->SpawnActor<ANaveEnemigaTransporteRefuerzo>(NaveEnemigaPosition, NaveEnemigaRotation);
			break;
		}

		


		
		

	}
	Super::BeginPlay();
	//Set the game state to playing
	/*FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasCazaAlfa = FVector(500.0f, -500.0f, 250.0f);*/

	


}

//void AGalaga_USFX_L01GameMode::BeginPlay()
//{
//	Super::BeginPlay();
//	//Set the game state to playing
//	FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 250.0f);
//	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);
//	FVector ubicacionInicioNavesEnemigasCazaAlfa = FVector(500.0f, -500.0f, 250.0f);
//
//
//	//FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
//	//FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);
//
//	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//
//	UWorld* const World = GetWorld();
//	if (World != nullptr)
//	{
//		for (int i = 0; i < 2; i++) {
//			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
//			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
//
//			//TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
//			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
//		}
//
//		float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;
//
//		for (int j = 0; j < 2; j++) {
//			FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
//			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
//
//			//TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
//			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
//		}
//
//		for (int j = 0; j < 2; j++) {
//			FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasCazaAlfa.Y + j * 300, ubicacionInicioNavesEnemigasCazaAlfa.Z);
//			ANaveEnemigaCazaAlfa* NaveEnemigaCazaAlfaTemporal = World->SpawnActor<ANaveEnemigaCazaAlfa>(PosicionNaveActual, rotacionNave);
//
//			//TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
//			TANavesEnemigas.Push(NaveEnemigaCazaAlfaTemporal);
//		}
//
//		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
//		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
//
//		TiempoTranscurrido = 0;
//	}
//
//	/*NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
//	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));*/
//
//}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));
			
		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		//TANavesEnemigas[numeroEnemigo]->SetVelocidad(0); // crasheo
	}
}
