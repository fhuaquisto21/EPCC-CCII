#include "./Product.h"

Product::Product() {}

Product::Product(int _code, std::string _name, float _price, int _quantity)
{
    this->code = _code;
    this->name = _name;
    this->price = _price;
    this->quantity = _quantity;
}

Product::~Product() {}

int Product::getCode()
{
    return this->code;
}

std::string Product::getName()
{
    return this->name;
}

float Product::getPrice()
{
    return this->price;
}

int Product::getQuantity()
{
    return this->quantity;
}

void Product::setCode(int _code)
{
    this->code = _code;
}

void Product::setName(std::string _name)
{
    this->name = _name;
}

void Product::setPrice(float _price)
{
    this->price = _price;
}

void Product::setQuantity(int _quantity)
{
    this->quantity = _quantity;
}
