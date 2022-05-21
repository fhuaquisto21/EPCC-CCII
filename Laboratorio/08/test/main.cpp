#include <iostream>
#include "derivada.cpp"

using namespace std;

int main() {
    Derivada *bptr;
    Derivada d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}
