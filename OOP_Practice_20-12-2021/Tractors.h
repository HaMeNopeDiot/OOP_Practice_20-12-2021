#pragma once
#include "Toys.h"

class Tractors :public Toys
{
protected:
	Color toyColor = green;
public:
	Tractors() :Toys() {};
	Tractors(int _price, bool _package, int _packagePrice = 0) : Toys(_price, _package, toyColor, _packagePrice) {};

	std::string getDescription() {
		return "Tractor";
	}
};