#include <iostream>

class Node {
    private:
        int value;
        Node* next;
    public:
        Node(int _value) {
            this->value = _value;
        }

        ~Node() {}

        void setValue(int _value) {
            this->value = _value;
        }

        void setNext(Node* _next) {
            this->next = _next;
        }

        int getValue() {
            return this->value;
        }

        Node* getNext() {
            return this->next;
        }
};

class Pila {
    public:
        Node* top;
        int length;
        int size;

        Pila(int _size) {
            this->size = _size;
            this->length = 0;
            this->top = nullptr;
        }

        int getTop() {
            return this->top->getValue();
        }

        int pop() {
            if (this->empty()) throw "ERROR: La pila está vacía";
            Node* auxNext = this->top->getNext();
            int auxValue = this->top->getValue();
            delete this->top;
            --this->length;
            this->top = auxNext;
            return auxValue;
        }

        int push(int _value) {
            if (this->full()) throw "ERROR: La pila está llena";
            Node* newNode = new Node(_value);
            newNode->setNext(this->top);
            this->top = newNode;
            ++this->length;
            return _value;
        }

        void clear() {
            Node** allNodes = new Node*[this->length];
            allNodes[0] = this->top;
            int i = 1;
            Node* auxNode = this->top;
            while (auxNode->getNext() != nullptr) {
                allNodes[i] = auxNode->getNext(); 
                ++i;
                auxNode = auxNode->getNext();
            }
            delete [] allNodes;
            this->top = nullptr;
            this->length = 0;
        }

        bool full() {
            if (this->length == this->size) {
                return true;
            }
            return false;
        }

        bool empty() {
            if (this->length == 0) {
                return true;
            }
            return false;
        }
};

int main() {
    try {
        Pila* pila = new Pila(5);
        for (int i = 0; i < 5; ++i) {
            pila->push(i);
        }
        std::cout << "Llena" << std::endl;
        pila->clear();
        for (int i = 0; i < 5; ++i) {
            pila->push(i);
        }
        std::cout << "Llena" << std::endl;
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }
    return 0;
}
