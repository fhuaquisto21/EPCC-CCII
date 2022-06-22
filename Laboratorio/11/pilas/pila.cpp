#include "pila.h"

Pila::Pila() {
    this->head = nullptr;
    this->length = 0;
}

Pila::Pila(int _value) {
    this->head = new Node(_value);
    this->length = 1;
}

Pila::~Pila() {}

int Pila::push(int _value) {
    Node* newNode = new Node(_value);
    if (this->head != nullptr) {
        newNode->setNext(this->head);
    }
    this->head = newNode;
    ++this->length;
    return this->head->getValue();
}

int Pila::pop() {
    if (this->head != nullptr) {
        Node* auxNode = this->head;
        int auxNodeValue = auxNode->getValue();
        this->head = this->head->getNext();
        delete auxNode;
        --this->length;
        return auxNodeValue;
    }
    return 0;
}

void Pila::printPila() {
    if (this->head == nullptr) {
        std::cerr << "ERROR: La pila está vacía";
        exit(-1);
    }
    Node* currentNode = this->head;
    while (currentNode->getNext() != nullptr) {
        std::cout << currentNode->getValue() << " -> ";
        currentNode = currentNode->getNext();
    }
    std::cout << currentNode->getValue() << std::endl;
}

int Pila::search(int _i) {
    if (_i >= this->length || _i < 0) {
        return 0;
    }
    Node* currentNode = this->head;
    for (int i = 0; i < _i; ++i) {
        currentNode = currentNode->getNext();
    }
    return currentNode->getValue();
}
