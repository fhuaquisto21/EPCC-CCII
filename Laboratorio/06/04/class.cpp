#include <iostream>
#include "class.h"

using namespace std;

Array::Array() {}

Array::Array(int _dato) {
    this->vec[0] = _dato;
    ++this->length;
}

Array::~Array() {}

bool Array::verificarEspacios() {
    if (this->length >= 5) {
        return false;
    }
    return true;
}

int Array::agregarDato(int _dato) {
    if (this->verificarEspacios()) {
        this->vec[this->length] = _dato;
        ++this->length;
        return this->vec[this->length - 1];
    }
    return 0;
}

int Array::eliminarData(int _value) {
    if (this->length <= 0) {
        return 0;
    }
    for (int i = 0; i < this->length; ++i) {
        if (this->vec[i] == _value) {
            this->vec[i] = 0;
            return _value;
        }
    }
    return 0;
}

void Array::mostrarArray() {
    if (this->length <= 0) return;
    for (int i = 0; i < this->length - 1; ++i) {
        printf("%i  ->  ", this->vec[i]);
    }
    printf("%i\n", this->vec[this->length - 1]);
}
