#pragma once
#include"Vehicle.h"

using namespace std;

class Car : public Vehicle //Declare car class as a derived class from vehicle
{
private:
	int numberOfDoors;

public:

	Car();
	int getnumberOfDoors();
	void setnumberOfDoors(int);	
	void displayInfoCar();
	
};

