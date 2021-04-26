#include "Vehicle.h"
#include<iostream>
//#include<string>

using namespace std;

Vehicle::Vehicle()
{
	yearBuilt = 0;
	manufacturer = "";
}

int Vehicle::getyearBuilt()
{
	return yearBuilt;
}

void Vehicle::setyearBuilt(int year)
{
	yearBuilt = year;
}

string Vehicle::getmanufacturer()
{
	return manufacturer;
}

void Vehicle::setmanufacturer(string name)
{
	manufacturer = name;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
