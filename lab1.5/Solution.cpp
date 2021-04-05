#include "Solution.h"
#include "Liquid.h"
#include<iostream>

#include <string>
#include<sstream>
using namespace std;

void Solution::Init(Liquid liquid, int  amount)
{
	setLiquid(liquid);
	setAmount(amount);
}
void Solution::Display() const
{
	cout << endl;
	cout << " Рідина" << endl; 
	liquid.Display();
	cout<< toString() << endl;
}
void Solution::Read()
{
	int amount;
	cout << "Рідина:" << endl;
	liquid.Read();
	cout << "Відносна к-сть речовини: "; cin >> amount;
	Init(liquid, amount);
}
string Solution::toString() const
{
	stringstream sout;

	sout << "Відносна к-сть речовини: " << amount << endl;
	return sout.str();
}