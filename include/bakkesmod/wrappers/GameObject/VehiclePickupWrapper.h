#pragma once
template<class T> class ArrayWrapper;
#include "../WrapperStructs.h"
#include ".././Engine/ActorWrapper.h"
class PrimitiveComponentWrapper;
class CarWrapper;

class BAKKESMOD_PLUGIN_IMPORT VehiclePickupWrapper : public ActorWrapper {
public:
	CONSTRUCTORS(VehiclePickupWrapper)

	//AUTO-GENERATED FROM FIELDS
	float GetRespawnDelay();
	void SetRespawnDelay(float newRespawnDelay);
	unsigned long GetbPickedUp();
	void SetbPickedUp(unsigned long newbPickedUp);
	unsigned long GetbNetRelevant();
	void SetbNetRelevant(unsigned long newbNetRelevant);
	unsigned long GetbNoPickup();
	void SetbNoPickup(unsigned long newbNoPickup);

	//AUTO-GENERATED FUNCTION PROXIES
	void PlayPickedUpFX();
	bool IsTouchingAVehicle();
	void UpdateTickDisabled();
	void SetNetRelevant(unsigned long bRelevant);
	void Respawn2();
	void SetPickedUp(unsigned long bNewPickedUp, CarWrapper InInstigator);
	void Pickup2(CarWrapper Car);
	bool CanPickup(CarWrapper Car);
	void OnTouch(CarWrapper Car);
	void eventTouch(ActorWrapper Other, PrimitiveComponentWrapper OtherComp, Vector& HitLocation, Vector& HitNormal);
	void OnPickUp();
	void OnSpawn();
	void SetNoPickup();
	void SetupReplicateNoPickup();
	void InitFX();
	void eventPostBeginPlay();
	void eventPreBeginPlay();
	void EventPickedUp(VehiclePickupWrapper Pickup);
	void EventSpawned(VehiclePickupWrapper Pickup);
private:
	PIMPL
};