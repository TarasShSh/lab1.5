#pragma once
#include <string>

using namespace std;
class Liquid
{
private:
	string name; // Назва рідини
	int density; // Густина

public:
	string getName() const { return name; };
	int getDensity() const { return density; };

	void setName(string value) { name = value; };
	void setDensity(int value) { density = value; };

	void Init(string name, int  density);
	void Display() const;
	void Read();
	string toString() const;
};

