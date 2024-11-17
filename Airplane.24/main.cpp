#include <iostream>
#include "airplane.h"
using namespace std;

int main()
{
	Airplane a("AirBus", 52, 100);
	Airplane b("BusAir", 67, 150);
	a.Print();
	b.Print();
	if (a == b)
	{
		cout << "Same type of airplanes" << endl;
	}
	else
	{
		cout << "NOT Same type of airplanes" << endl;
	}
	++a;
	--b;
	a.Print();
	b.Print();
	if (a > b)
	{
		cout << "First airplane can take more passengers" << endl;
	}
	else
	{
		cout << "Second airplane can take more passengers" << endl;
	}
}