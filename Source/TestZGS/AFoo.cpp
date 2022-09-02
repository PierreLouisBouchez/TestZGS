// Fill out your copyright notice in the Description page of Project Settings.


#include "AFoo.h"

// Sets default values
AAFoo::AAFoo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAFoo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAFoo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

