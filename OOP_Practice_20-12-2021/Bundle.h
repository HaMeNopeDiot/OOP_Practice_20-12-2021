#pragma once
#include "Toys.h"
#include "Tractors.h"
#include "Trailers.h"

class Bundle : public Tractors
{
	Toys* Trailer;
public:
	Bundle() :Tractors() {};
	Bundle(Toys* _T, int _price, bool _package, int _packagePrice = 0) : Tractors(_price, _package, _packagePrice), Trailer(_T) {};

	int getTotalPrice() { return int((price + packagePrice + Trailer->getPrice()) * 0.9); };


	std::string getDescription() {
		return "Bundle";
	}
};