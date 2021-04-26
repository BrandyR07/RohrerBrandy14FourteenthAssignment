#include "Truck.h"
#include<iostream>

using namespace std;

void truckDisplayInfo()
{

}

Truck::Truck()
{
	towingCapacity = 0;
}

int Truck::gettowingCapacity()
{
	return towingCapacity;
}

void Truck::settowingCapacity(int capacity)
{
	towingCapacity = capacity;
}

void Truck::truckDisplayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;

}
