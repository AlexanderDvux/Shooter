// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseActor.h"


DEFINE_LOG_CATEGORY_STATIC(LogBase,All,All)

// Sets default values
ABaseActor::ABaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseActor::BeginPlay()
{
	Super::BeginPlay();
	PrintBaseLogs();
	
}

// Called every frame
void ABaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseActor::PrintBaseLogs()
{	
	int WeaponNum = 4;
	int KillsNum = 7;
	float Health = 34.533456f;
	bool IsDead = false;
	bool HasWeapon = true;
	UE_LOG(LogBase, Display, TEXT("Weapon = %d, Killsnum = %i"), WeaponNum, KillsNum);
	UE_LOG(LogBase, Display, TEXT("Health = %f"), Health);
	UE_LOG(LogBase, Display, TEXT("Health = %.2f"), Health);
	UE_LOG(LogBase, Display, TEXT("HasWeapon = %d"), HasWeapon);
	UE_LOG(LogBase, Display, TEXT("IsDead = %i"), static_cast<int>(IsDead));
}

