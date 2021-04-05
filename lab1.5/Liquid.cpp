#include "Liquid.h"
#include<iostream>

#include <string>
#include <sstream>
using namespace std;

void Liquid::Init(string name, int  density) 
{
	setName(name);
	setDensity(density);
}
void Liquid::Display() const
{
	cout << toString();
}
void Liquid::Read()
{
	string name;
	int  density;
	cout << "Введіть назву: "; cin >> name;
	cout << "Введіть густину: "; cin >> density;
	Init(name, density);
}
string Liquid::toString() const
{
	stringstream sout;           // створили об'єкт класу "літерний потік"
	sout << "Назва: " << name << endl;
	sout << "Густина: " << density << endl;
	return sout.str(); 
}