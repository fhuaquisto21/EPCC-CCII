#include <iostream>
#include "cola.h"

Cola::Cola() {
    this->head = nullptr;
}

Cola::Cola(int _value) {
    Node* newNode = new Node(_value);
    this->head = newNode;
}

Cola::~Cola() {}

Node* Cola::push(int _value) {
    Node* newNode = new Node(_value);
    Node* currentNode = this->head;
    if (this->head == nullptr) {
        this->head = newNode;
        return this->head;
    }
    while (currentNode->getNext() != nullptr) {
        currentNode = currentNode->getNext();
    }
    currentNode->setNext(newNode);
    return currentNode;
}

Node* Cola::pop() {
    Node* auxNode = this->head;
    this->head = auxNode->getNext();
    delete auxNode;
    return this->head;
}

Node* Cola::search(int _index) {
    Node* currentNode = this->head;
    if (_index == 0) return currentNode;
    for (int i = 0; i < _index; ++i) {
        currentNode = currentNode->getNext();
        if (currentNode == nullptr) {
            return nullptr;
        }
    }
    return currentNode;
}

void Cola::printCola() {
    Node* currentNode = this->head;
    while (currentNode->getNext() != nullptr) {
        std::cout << currentNode->getValue() << " -> ";
        currentNode = currentNode->getNext();
    }
    std::cout << currentNode->getValue() << std::endl;
}
