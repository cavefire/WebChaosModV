#pragma once

typedef int Ped;
typedef int Vehicle;
typedef unsigned long Hash;

Ped CreatePoolPed(int pedType, Hash modelHash, float x, float y, float z, float heading);
Ped CreateRandomPoolPed(float posX, float posY, float posZ);
Ped CreatePoolPedInsideVehicle(Vehicle vehicle, int pedType, Hash modelHash, int seat);

Vehicle CreatePoolVehicle(Hash modelHash, float x, float y, float z, float heading);

Object CreatePoolProp(Object modelHash, float x, float y, float z, bool dynamic);