#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Piece {
    private:
        pair<int, int> values;
    public:
        Piece(int _a, int _b) {
            this->values.first = _a;
            this->values.second = _b;
        }

        void swapValues() {
            int aux = this->values.first;
            this->values.first = this->values.second;
            this->values.second = aux;
        }

        int getFirst() {
            return this->values.first;
        }

        int getSecond() {
            return this->values.second;
        }
};

class Domino {
    private:
        vector<Piece*> dominos;
    public:
        Domino() {}
        void addPiece(int _a, int _b) {
            Piece* temp = new Piece(_a, _b);
            this->dominos.push_back(temp);
        }

        void printDomino() {
            vector<int> aux = {0};
            int count = 0;
            for (int i = 0; i < this->dominos.size(); ++i) {
                for (int y = 0; y < this->dominos.size() - 1; ++y) {
                    bool exist = false;
                    for (int ignoreV: aux) {
                        if (ignoreV == y) {
                            exist = true;
                            break;
                        } 
                    }
                    if (!exist) {
                        if (this->dominos[count]->getSecond() == this->dominos[y]->getFirst()) {
                            Piece* auxPiece = this->dominos[count + 1];
                            this->dominos[count + 1] = this->dominos[y];
                            this->dominos[y] = auxPiece;
                            aux.push_back(y);
                        } else if (this->dominos[count]->getSecond() == this->dominos[y]->getSecond()) {
                            this->dominos[y]->swapValues();
                            Piece* auxPiece = this->dominos[count + 1];
                            this->dominos[count + 1] = this->dominos[y];
                            this->dominos[y] = auxPiece;
                            aux.push_back(y);
                        }
                        ++count;
                    }
                }
            }
            for (int i = 0; i < this->dominos.size(); ++i) {
                cout << this->dominos[i]->getFirst() << ":" << this->dominos[i]->getSecond() << endl;
            }
        }
};

int main() {
    Domino* dom = new Domino();
    dom->addPiece(1, 2);
    dom->addPiece(3, 4);
    dom->addPiece(3, 2);
    dom->addPiece(4, 1);
    dom->addPiece(4, 1);
    dom->printDomino();
    return 0;
}
