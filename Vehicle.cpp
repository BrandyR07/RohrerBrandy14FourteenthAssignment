#include "Vehicle.h"
#include<iostream>
//#include<string>

using namespace std;

Vehicle::Vehicle()//Base class constructor
{
	yearBuilt = 0;
	manufacturer = "";
}

int Vehicle::getyearBuilt()//Function to get year built
{
	return yearBuilt;
}

void Vehicle::setyearBuilt(int year)//Function to set year built
{
	yearBuilt = year;
}

string Vehicle::getmanufacturer()//Function to get manufacturer
{
	return manufacturer;
}

void Vehicle::setmanufacturer(string name)//Function to set manfacturer
{
	manufacturer = name;
}

void Vehicle::displayInfo()//Funtion to display vehicle information
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
