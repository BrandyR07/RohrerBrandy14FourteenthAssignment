#include "Car.h"
#include<iostream>

using namespace std;

Car :: Car()
{
	numberOfDoors = 0;
}

int Car::getnumberOfDoors()
{
	return numberOfDoors;
}

void Car::setnumberOfDoors(int door)
{
	numberOfDoors = door;
}

void Car::displayInfoCar()
{
	Vehicle::displayInfo();
	cout << "Doors: " << numberOfDoors << endl;
}
