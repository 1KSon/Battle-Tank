// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController_Real.h"
#include "BattleTank.h"

void ATankPlayerController_Real::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

void ATankPlayerController_Real::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController_Real Not Possessing a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController_Real Possessing: %s"), *(ControlledTank->GetName()));
	}
}


ATank* ATankPlayerController_Real::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController_Real::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }
}

