#pragma once
#include"Vehicle.h"
#include<string>
#include<iomanip>

using namespace std;

class Truck : public Vehicle //Declare truck derived class
{
private:
	int towingCapacity;

public:

	Truck();
	int gettowingCapacity();
	void settowingCapacity(int);
	void truckDisplayInfo();
};

