#include <iostream>

class Contador {
    private:
        int count;
    public:
        Contador(int _count) {
            this->count = _count;
        }

        void operator++() {
            this->count++;
        }

        void operator++(int) {
            this->count++;
        }

        int valor() {
            return this->count;
        }
};

int main() {
    Contador a(2);
    a++;
    ++a;
    std::cout << "Valor: " << a.valor() << std::endl;
    return 0;
}
