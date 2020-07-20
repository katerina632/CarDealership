#include "Car.h"
#include<iostream>
#include<string>

using namespace std;

ostream& operator<<(ostream& os, const Car& cr)
{
	cout << "Nameof car: " << cr.name << endl;
	cout << "Graduation year : " << cr.year << endl;
	cout << "Engine capacity: " << cr.engineCapacity << endl;
	cout << "Price: " << cr.price << endl;	

	return os;	
}

