#include "Truck.h"
#include<iostream>

using namespace std;

Truck::Truck()//Constructor for truck class
{
	towingCapacity = 0;
}

int Truck::gettowingCapacity()//Function to get towing capacity
{
	return towingCapacity;
}

void Truck::settowingCapacity(int capacity)//Function to set towing capacity
{
	towingCapacity = capacity;
}

void Truck::truckDisplayInfo()//Function to display truck information
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;

}
