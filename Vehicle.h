#pragma once
#include<string>

using namespace std;

class Vehicle
{
private:
	int yearBuilt;
	string manufacturer;

public:
	Vehicle();
	Vehicle(string, int);
	int getyearBuilt();
	void setyearBuilt(int);
	string getmanufacturer();
	void setmanufacturer(string);
	void displayInfo();
};

