#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Piece
{
    private:
        char character;
        int value;
    public:
        Piece(char _character, int _value)
        {
            this->character = _character;
            this->value = _value;
        }

        void printPiece()
        {
            cout << "Letra: " << this->character << "; Valor: " << this->value << endl;
        }
};

class Player
{
    private:
        vector<Piece*> pieces;
        string username;
    public:
        Player(string _username)
        {
            this->username = _username;
            const char* characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            for (int i = 0; i < 7; ++i)
            {
                int character = rand() % 25;
                int value = 100 + rand() % (500 - 100);
                Piece* tempPiece = new Piece(characters[character], value);
                this->pieces.push_back(tempPiece);
            }
        }

        void piecesPlayer()
        {
            cout << this->username << " tiene las siguientes fichas: " << endl;
            for (int i = 0; i < 7; ++i)
            {
                this->pieces[i]->printPiece();
            }
            cout << endl;
        }
};

int main()
{
    srand(time(NULL));
    vector<Player*> players;
    for (int i = 0; i < 4; ++i)
    {
        string username;
        cout << "[" << i + 1 << "] Username: ";
        cin >> username;
        Player* player = new Player(username);
        players.push_back(player);
    }
    for (int i = 0; i < 4; ++i)
    {
        players[i]->piecesPlayer();
        delete players[i];
    }
    return 0;
}
