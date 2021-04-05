#pragma once
#include "Liquid.h"
#include <string>

using namespace std;
class Solution
{
private:
	Liquid liquid; // рідина
	int amount; // Відносна к-сть речовини

public:
	Liquid getLiquid() const { return liquid; };
	int getAmount() const { return amount; };

	void setLiquid(Liquid value) { liquid = value; };
	void setAmount(int value) { amount = value; };

	void Init(Liquid liquid, int  amount);
	void Display() const;
	void Read();
	string toString() const;
};

