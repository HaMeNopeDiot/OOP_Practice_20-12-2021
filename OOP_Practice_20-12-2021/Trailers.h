#pragma once
#include "Toys.h"

class Trailers : public Toys
{
public:
	Trailers() :Toys() {};
	Trailers(int _price, bool _package, Color _tc, int _packagePrice = 0) : Toys( _price, _package, _tc, _packagePrice) {};

	std::string getDescription() {
		return "Trailers";
	}
};