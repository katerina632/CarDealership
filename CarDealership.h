#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include "Car.h"


using namespace std;
class CarDealership
{
	vector<Car> cars;

public:
	void AddCar(Car t) {
		cars.push_back(t);
	}
};

