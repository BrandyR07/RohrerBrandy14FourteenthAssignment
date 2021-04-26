#pragma once
#include"Vehicle.h"
#include<string>
#include<iomanip>

using namespace std;

class Truck : public Vehicle
{
private:
	int towingCapacity;

public:

	Truck();
	Truck(int);
	int gettowingCapacity();
	void settowingCapacity(int);
	void truckDisplayInfo();
};

