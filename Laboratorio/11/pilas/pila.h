#include "node.cpp"

class Pila {
    private:
        Node* head;
        int length;
    public:
        Pila();
        Pila(int);
        ~Pila();
        int push(int);
        int pop();
        void printPila();
        int search(int);
};
