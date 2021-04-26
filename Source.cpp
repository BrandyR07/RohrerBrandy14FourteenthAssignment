#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;

int main()
{
	string manufacturer;
	int yearBuilt = 0, doors = 0, towingCapacity = 0;

	Vehicle vehicle;
	Car car;
	Truck truck;

	//Test Vehcile class
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	vehicle.setmanufacturer(manufacturer);
	vehicle.setyearBuilt(yearBuilt);
	vehicle.displayInfo();
	cout << endl;
	cin.ignore();

	//Test Car class
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors: ";
	cin >> doors;
	car.setmanufacturer(manufacturer);
	car.setyearBuilt(yearBuilt);
	car.setnumberOfDoors(doors);
	car.displayInfoCar();
	cout << endl;
	cin.ignore();

	//Test truck class
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	truck.setmanufacturer(manufacturer);
	truck.setyearBuilt(yearBuilt);
	truck.settowingCapacity(towingCapacity);
	truck.truckDisplayInfo();
	
	cout << endl;

	system("pause");
	return 0;
}