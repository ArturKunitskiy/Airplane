#pragma once
class Airplane
{
private:

	int amount;
	int maxAmount;
	char* type;

public:

	Airplane();
	Airplane(const char* t, int a, int m);
	~Airplane();
	void Print();
	bool operator==(Airplane& b);
	Airplane& operator++();
	Airplane& operator--();
	bool operator>(Airplane& b);
};