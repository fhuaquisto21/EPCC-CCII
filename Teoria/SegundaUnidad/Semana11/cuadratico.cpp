#include <iostream>

class Cuadratica {
    public:
        int a;
        int b;
        int c;

        Cuadratica() {
            this->a = 0;
            this->b = 0;
            this->c = 0;
        }

        Cuadratica(int _a, int _b, int _c) {
            this->a = _a;
            this->b = _b;
            this->c = _c;
        }

        Cuadratica(Cuadratica const& other) {
            this->a = other.a;
            this->b = other.b;
            this->c = other.c;
        }

        Cuadratica operator =(Cuadratica const& other) {
            this->a = other.a;
            this->b = other.b;
            this->c = other.c;
            return *this;
        }

        double operator ()(int _x) {
            double fx = (this->a * (_x * _x)) + (this->b * _x) + (this->c);
            return fx;
        }
};



int main() {
    Cuadratica cua1(2, 3, 5);
    Cuadratica cua2 = cua1;
    std::cout << "X: 5" << std::endl;
    std::cout << "f(x) = " << cua2(5) << std::endl;
    return 0;
}
