#pragma once
#include<string>

using namespace std;

class Vehicle // Base class
{
private: 
	int yearBuilt;
	string manufacturer;

public:
	Vehicle();
	int getyearBuilt();
	void setyearBuilt(int);
	string getmanufacturer();
	void setmanufacturer(string);
	void displayInfo();
};

