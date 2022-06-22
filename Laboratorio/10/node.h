/**
 * 1. Defina una lista enlazada que permita insertar elementos al final de todos los
 * elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
 * orden, simplemente los elementos nuevos deben de ingresar como el último elemento.
 */
class Node {
    private:
        Node* next;
        int value;
    public:
        Node();
        Node(int);
        ~Node();
        Node* getNext();
        Node* setNext(Node*);
        int getValue();
        int setValue(int);
};
