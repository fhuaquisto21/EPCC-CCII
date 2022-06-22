#include "node.cpp"

class Cola {
    private:
        Node* head;
    public:
        Cola();
        Cola(int);
        ~Cola();
        Node* push(int);
        Node* pop();
        Node* search(int);
        void printCola();
};
