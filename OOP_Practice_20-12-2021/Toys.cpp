#include "Toys.h"

void Toys::setPrice(int _price)
{
	price = _price;
}
void Toys::setPackage(bool _package, int _pricePackage)
{
	isPackage = _package;
	if (_package == true)
		packagePrice = _pricePackage;
	else
		packagePrice = 0;
}
void Toys::setDescription(std::string _desc)
{
	description = _desc;
}

Toys::Color Toys::getColor()
{
	return toyColor;
}

int Toys::getPrice()
{
	return price;
}
int Toys::getPackagePrice()
{
	return packagePrice;
}
bool Toys::getIsPackage()
{
	return isPackage;
}

int Toys::getTotalPrice()
{
	return price + isPackage * packagePrice;
}

std::string Toys::getInfo()
{
	return getDescription() + std::to_string(getTotalPrice());
}