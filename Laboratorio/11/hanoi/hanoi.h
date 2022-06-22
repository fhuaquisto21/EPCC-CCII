#include "tower.cpp"

class Hanoi {
    private:
        Tower** towers;
        int level;
        int** transformHanoi();
    public:
        Hanoi(int);
        ~Hanoi();
        void resolveGame(int, Tower*, Tower*, Tower*);
        void printMove();
        Tower** getTower();
};
