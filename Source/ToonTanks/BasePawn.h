// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	// it will only be visible in Instance which is placed in the viewport
	UPROPERTY(VisibleInstanceOnly)
		int32 VisibleInstanceOnly = 1;

	// It can be edited in the blueprint
	UPROPERTY(EditAnywhere)
		int32 EditAnywhere = 1;

	UPROPERTY(VisibleDefaultsOnly)
		int32 VisibleOnlyInDefaultBP = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed = 5.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
		class UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
		UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components")
		USceneComponent* ProjectileSpawnpoint;

	// it will only be visible in the blueprint and many more things just read the code
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Super Duper Variable")
		int32 VisibleAnyWhere = 1;
};
