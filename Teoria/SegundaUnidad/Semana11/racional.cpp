#include <iostream>

class Racional {
    public:
        int x;
        int y;

        Racional(int _x = 0, int _y = 1) {
            this->x = _x;
            this->y = _y;
        }

        Racional(const Racional& src) {
            this->x = src.x;
            this->y = src.y;
        }

        int getX() {
            return this->x;
        }

        int getY() {
            return this->y;
        }

        Racional operator +=(const Racional &b) {
            if (this->y == b.y) {
                this->x += b.x;
            } else {
                this->x = this->x * b.y + this->y * b.x;
                this->y = this->y * b.y;
            }       
            return *this;
        }

        Racional operator -=(const Racional &b) {
            if (this->y == b.y) {
                this->x -= b.x;
            } else {
                this->x = this->x * b.y - this->y * b.x;
                this->y = this->y * b.y;
            }       
            return *this;
        }

        Racional operator *=(const Racional &b) {
            this->x *= b.x;
            this->y *= b.y;
            return *this;
        }

        Racional operator /=(const Racional &b) {
            this->x *= b.y;
            this->y *= b.x;
            return *this;
        }

        void printRacional() {
            std::cout << this->x << "/" << this->y << std::endl;
        }
};

Racional& operator +(const Racional &a, const Racional &b) {
    if (a.y == b.y) {
        return *(new Racional(a.x + b.x, a.y));
    } else {
        return *(new Racional((a.x * b.y) + (b.x * a.y), (a.y * b.y)));
    }
}

Racional& operator -(const Racional &a, const Racional &b) {
    if (a.y == b.y) {
        return *(new Racional(a.x - b.x, a.y));
    } else {
        return *(new Racional((a.x * b.y) - (b.x * a.y), (a.y * b.y)));
    }
}

Racional& operator *(const Racional &a, const Racional &b) {
    return *(new Racional(a.x * b.x, a.y * b.y));
}

Racional& operator /(const Racional &a, const Racional &b) {
    return *(new Racional(a.x * b.y, a.y * b.x));
}

double racional2Double(const Racional &a) {
    double result = a.x / a.y;
    return result;
}

int main() {
    Racional test1(2, 3);
    Racional test2(4, 5);
    test1.printRacional();
    test1 += test2;
    test1.printRacional();
    return 0;
}
