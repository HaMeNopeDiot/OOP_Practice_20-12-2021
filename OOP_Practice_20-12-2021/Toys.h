#pragma once
#include <string>


class Toys {
public:
	enum Color {
		red,
		blue,
		green,
		other
	};
protected:
	int price;
	std::string description;
	int packagePrice;
	bool isPackage;
	const Color toyColor;
public:
	Toys() :price(0), isPackage(false), packagePrice(0), description(""), toyColor(other){ };
	Toys(int _price, bool _package, int _packagePrice = 0) : price(_price), isPackage(_package), packagePrice(_packagePrice), description(""), toyColor(other) {};
	Toys(int _price, bool _package, Color _tc ,int _packagePrice = 0) : toyColor(_tc), price(_price), isPackage(_package), packagePrice(_packagePrice), description("") {};

	void setPrice(int _price);
	void setPackage(bool _package, int _pricePackage);
	void setDescription(std::string _desc);

	Color getColor();

	int getPrice();
	int getPackagePrice();
	bool getIsPackage();
	virtual std::string getDescription() = 0;

	virtual int getTotalPrice();
	std::string getInfo();
};