#ifndef STORE_H
#define STORE_H

#include "./Product.h"

class Store
{
private:
    Product **store;
    int maxProducts;
    int length;

public:
    Store();
    Store(int, std::string, float, int);
    ~Store();
    void addProduct(int, std::string, float);
    void addProduct(int, std::string, float, int);
    void sellProductName(std::string);
    void sellProductCode(int);
    void updateProduct(int, std::string, float, int);
    void isEmpty();
    void isFull();
    void existProduct(std::string);
};

#include "./Store.cpp"

#endif
