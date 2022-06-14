#include <iostream>

using namespace std;

class Robot {
    private:
        int x;
        int y;
        int o;
    public:
        Robot(int _x, int _y, int _o) {
            this->o = _o;
            this->x = _x;
            this->y = _y;
        }

        Robot() {
            this->o = 0;
            this->x = 0;
            this->y = 0;
        }

        void setMove(char* moves) {
            int count = 0;
            while (moves[count] != '\0') {
                if (moves[count] == 'd' || moves[count] == 'D') {
                    if (this->o == 3) {
                        this->o = 0;
                    } else {
                        ++this->o;
                    }
                } else if (moves[count] == 'i' || moves[count] == 'I') {
                    if (this->o == 0) {
                        this->o = 3;
                    } else {
                        --this->o;
                    }
                } else if (moves[count] == 'a' || moves[count] == 'A') {
                    switch (this->o) {
                        case 0:
                            ++this->y;
                            break;
                        case 1:
                            ++this->x;
                            break;
                        case 2:
                            --this->y;
                            break;
                        case 3:
                            --this->x;
                            break;
                    }
                } else {
                    cerr << "ERROR: Movimiento no permitido -> " << moves[count] << endl;
                    exit(-1);
                }
                ++count;
            }
        }

        void printPosition() {
            printf("Posición: X -> %i; Y -> %i\n", this->x, this->y);
            printf("Orientación: %s\n", this->o == 0 ? "Frente" : this->o == 1 ? "Derecha" : this->o == 2 ? "Detras" : "Izquierda");
        }
};

int main() {
    Robot* rob = new Robot();
    char* moves = new char[100];
    printf("Movimiento del robot (D, I, A): ");
    cin >> moves;
    rob->setMove(moves);
    rob->printPosition();

    return 0;
}
