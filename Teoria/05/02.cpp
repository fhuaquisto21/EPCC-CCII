#include <iostream>

using namespace std;

class Base {
    public:
        Base() {}
        virtual void print() {
            cout << "Base" << endl;
        }
};

class Derivada: public Base {
    public:
        Derivada(){}
        void print() {
            cout << "Derivada" << endl;
        }
};

int main() {
    Base *zxc = new Derivada();
    Derivada dev;
    Derivada *asd = new Derivada();
    dev.print();
    asd->print();
    zxc->print();
    return 0;
}
