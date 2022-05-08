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
	// it will only be visible in the bluprint
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 VisibleAnyWhere = 1;

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

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY()
		class UCapsuleComponent* CapsuleComp;

	UPROPERTY()
		UStaticMeshComponent* BaseMesh;

	UPROPERTY()
		UStaticMeshComponent* TurretMesh;

	UPROPERTY()
		USceneComponent* ProjectileSpawnpoint;

};
