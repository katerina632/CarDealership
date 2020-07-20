#pragma once
#include<iostream>
#include<string>


using namespace std;
class Car
{
private:
	string name;
	int	year;
	int engineCapacity;
	int	price;
public:
	Car() : name("No name"), year(1), engineCapacity(0), price(0) {}
	Car(string name,int  year, int cap,int price) : name(name), year(year), engineCapacity(cap), price(price) {}	

};

