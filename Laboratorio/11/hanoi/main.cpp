#include <iostream>
#include "hanoi.cpp"

int main() {
    int level;
    std::cout << "Cantidad de fichas: ";
    std::cin >> level;
    Hanoi* hanoi = new Hanoi(level);
    hanoi->printMove();
    hanoi->resolveGame(level, hanoi->getTower()[0], hanoi->getTower()[2], hanoi->getTower()[1]);
    return 0;
}
