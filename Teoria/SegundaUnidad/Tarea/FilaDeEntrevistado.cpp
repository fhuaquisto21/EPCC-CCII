#include <iostream>
#include <deque>

int timeLeft(std::deque<int> *_fila) {
    int total = 0;
    while (true) {
        int auxFront = _fila->front();
        int auxBack = _fila->back();
        if (auxFront == -1 || auxBack == -1) return total;
        if (auxFront > auxBack) {
            total += auxBack;
            _fila->pop_back();
        } else {
            total += auxFront;
            _fila->pop_front();
        }
    }
}

int main() {
    std::deque<int> *fila = new std::deque<int>;
    int* times = new int[7]{ 7, 4, -1, 5, 6, 3, 8 };
    for (int i = 0; i < 7; ++i) {
        fila->push_back(times[i]);
    }
    std::cout << "Tiempo restante: " << timeLeft(fila) << std::endl;
    return 0;
}