#include <iostream>
#include "tower.h"

Tower::Tower(int _level) {
    this->head = new Node(0);
    for (int i = 0; i < _level - 1; ++i) {
        this->addNode(0);
    }
}

Tower::~Tower() {}

Node* Tower::getHead() {
    return this->head;
}

void Tower::addNode(int _value) {
    Node* newNode = new Node(_value);
    if (this->head == nullptr) {
        this->head = newNode;
    }
    Node* auxNode = this->head;
    newNode->setNext(auxNode);
    this->head = newNode;
    this->head->setNext(auxNode);
}

int Tower::push(int _value) {
    Node* currentNode = this->head;
    while (currentNode->getNext() != nullptr) {
        if (currentNode->getNext()->getValue() != 0) {
            currentNode->setValue(_value);
            break;
        }
        currentNode = currentNode->getNext();
    }
    currentNode->setValue(_value);
    return _value;
}
/*
int Tower::pop() {
    Node* auxNode = this->head->getNext();
    int auxValue = this->head->getValue();
    delete this->head;
    this->head = auxNode;
    return auxValue;
}
*/

int Tower::pop() {
    Node* currentNode = this->head;
    int auxValue = 0;
    while (currentNode != nullptr) {
        if (currentNode->getValue() != 0) {
            auxValue = currentNode->getValue();
            currentNode->setValue(0);
            break;
        }
        currentNode = currentNode->getNext();
    }
    return auxValue;
}

void Tower::printTower() {
    Node* auxNode = this->head;
    while (auxNode->getNext() != nullptr) {
        std::cout << auxNode->getValue() << " -> ";
        auxNode = auxNode->getNext();
    }
    std::cout << auxNode->getValue() << std::endl;
}
