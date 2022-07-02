#include "./Store.h"

Store::Store()
{
    this->maxProducts = 10;
    this->store = new Product *[this->maxProducts];
    this->length = 0;
}

Store::Store(int _code, std::string _name, float _price, int _quantity = 0)
{
    this->maxProducts = 10;
    this->store = new Product *[this->maxProducts];
    Product *newProduct = new Product(_code, _name, _price, _quantity);
    this->store[0] = newProduct;
    this->length = 1;
}

Store::~Store() {}

void Store::addProduct(int _code, std::string _name, float _price, int _quantity = 0)
{
    this->isFull();
    this->existProduct(_name);
    Product *newProduct = new Product(_code, _name, _price, _quantity);
    this->store[this->length] = newProduct;
    ++this->length;
}

void Store::sellProductCode(int _code)
{
    this->isEmpty();
    for (int it = 0; it < this->length; ++it)
    {
        if (this->store[it]->getCode() == _code)
        {
            if (this->store[it]->getQuantity() == 0)
            {
                std::cerr << "ERROR: El producto con código " << _code << " está agotado" << std::endl;
                exit(-1);
            }
            this->store[it]->setQuantity(this->store[it]->getQuantity() - 1);
            std::cout << "Comprado" << std::endl;
            return;
        }
    }
    std::cerr << "ERROR: El producto con código " << _code << " no existe" << std::endl;
    exit(-1);
}

void Store::sellProductName(std::string _name)
{
    this->isEmpty();
    for (int it = 0; it < this->length; ++it)
    {
        if (this->store[it] != nullptr)
        {
            if (this->store[it]->getName() == _name)
            {
                if (this->store[it]->getQuantity() == 0)
                {
                    std::cerr << "ERROR: El producto " << _name << " está agotado" << std::endl;
                    exit(-1);
                }
                this->store[it]->setQuantity(this->store[it]->getQuantity() - 1);
                std::cout << "Comprado" << std::endl;
                return;
            }
        }
    }
    std::cerr << "ERROR: El producto " << _name << " no existe" << std::endl;
    exit(-1);
}

void Store::updateProduct(int _code, std::string _name = "", float _price = 0.f, int _quantity = -1)
{
    this->isEmpty();
    for (int it = 0; it < this->length; ++it)
    {
        if (this->store[it]->getCode() == _code)
        {
            if (_name != "")
            {
                this->store[it]->setName(_name);
            }
            if (_price != 0.f)
            {
                this->store[it]->setPrice(_price);
            }
            if (_quantity > -1)
            {
                this->store[it]->setQuantity(_quantity);
            }
        }
    }
}

void Store::isEmpty()
{
    if (this->length == 0)
    {
        std::cerr << "ERROR:: La tienda está vacía" << std::endl;
        exit(-1);
    }
}

void Store::isFull()
{
    if (this->length == this->maxProducts)
    {
        std::cerr << "ERROR: La tienda está llena" << std::endl;
        exit(-1);
    }
}

void Store::existProduct(std::string _name)
{
    for (int it = 0; it < this->length; ++it)
    {
        if (this->store[it]->getName() == _name)
        {
            std::cerr << "ERROR: El producto ya existe en la tienda" << std::endl;
            exit(-1);
        }
    }
}
