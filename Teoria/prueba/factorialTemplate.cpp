#include <iostream>

using namespace std;

template <class number>
number factorialTemplate(number n) {
    if (n <= 1) {
        return 1;
    } else {
        number fac = n;
        for (number i = n - 1; i >= 1; i--) {
            fac *= i;
        }
        return fac;
    }
}

int main() {
    for (long long int i = 1; i < 30; i++) {
        cout << i << ": " << factorialTemplate(i) << endl;
    }
    return 0;
}
