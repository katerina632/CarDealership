#pragma once
#include<iostream>
#include<string>
#include<fstream>



using namespace std;
class Car
{
private:
	string name;
	int	year;
	int engineCapacity;
	int	price;

	friend ostream& operator<<(ostream& os, const Car& tr);
public:
	Car() : name("No name"), year(1), engineCapacity(0), price(0) {}
	Car(string name,int  year, int cap,int price) : name(name), year(year), engineCapacity(cap), price(price) {}	


};

