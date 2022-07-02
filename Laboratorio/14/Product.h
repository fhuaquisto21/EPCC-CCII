#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
private:
    int code;
    std::string name;
    float price;
    int quantity;

public:
    Product();
    Product(int, std::string, float, int);
    ~Product();
    int getCode();
    std::string getName();
    float getPrice();
    int getQuantity();
    void setCode(int);
    void setName(std::string);
    void setPrice(float);
    void setQuantity(int);
};

#include "./Product.cpp"

#endif
