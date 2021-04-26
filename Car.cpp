#include "Car.h"
#include<iostream>

using namespace std;

Car :: Car() //Car constructor
{
	numberOfDoors = 0;
}

int Car::getnumberOfDoors()//FUnction to get number of doors
{
	return numberOfDoors;
}

void Car::setnumberOfDoors(int door)//Function to set number of doors
{
	numberOfDoors = door;
}

void Car::displayInfoCar()//Function to display car information
{
	Vehicle::displayInfo();
	cout << "Doors: " << numberOfDoors << endl;
}
