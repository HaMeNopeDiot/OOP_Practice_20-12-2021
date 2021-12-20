#pragma once
#include "Toys.h"


class Cars :public Toys {
public:
	Cars() :Toys(){};
	Cars(int _price, bool _package, Color _tc,int _packagePrice = 0): Toys(_price, _package, _tc, _packagePrice){};

	std::string getDescription() {
		return "Car";
	}
};