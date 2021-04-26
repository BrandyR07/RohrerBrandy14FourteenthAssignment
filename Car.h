#pragma once
#include"Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
	int numberOfDoors;

public:

	Car();
	int getnumberOfDoors();
	void setnumberOfDoors(int);	
	void displayInfoCar();
	
};

