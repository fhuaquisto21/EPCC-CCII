#include <iostream>
#include "list.h"

using namespace std;

List::~List() {}

List::List() {
    this->head = nullptr;
    this->length = 0;
}

List::List(int _value) {
    this->head = new Node(_value);
    this->length = 1;
}

Node* List::addLastNode(int _value) {
    Node* currentNode = this->head;
    Node* newNode = new Node(_value);
    if (currentNode == nullptr) {
        currentNode = newNode;
    } else {
        while (currentNode->getNext() != nullptr) {
            currentNode = currentNode->getNext();
        }
        currentNode->setNext(newNode);
    }
    ++this->length;
    return currentNode->getNext();
}

Node* List::addFirstNode(int _value) {
    Node* newNode = new Node(_value);
    newNode->setNext(this->head);
    this->head = newNode;
    ++this->length;
    return this->head;
}

Node* List::addIndexNode(int _value, int _index) {
    Node* currentNode = this->head;
    Node* prevNode = nullptr;
    Node* newNode = new Node(_value);
    if (_index >= this->length) {
        cout << "ERROR: El índice no existe.";
        return nullptr;
    }
    if (_index == 0) {
        return currentNode;
    }
    for (int i = 1; i <= _index; ++i) {
        prevNode = currentNode;
        currentNode = currentNode->getNext();
    }
    newNode->setNext(currentNode);
    prevNode->setNext(newNode);
    ++this->length;
    return prevNode->getNext();
}

void List::deleteLastNode() {
    Node* currentNode = this->head;
    Node* prevNode = nullptr;
    while (currentNode->getNext() != nullptr) {
        prevNode = currentNode;
        currentNode = currentNode->getNext();
    }
    delete currentNode;
    prevNode->setNext(nullptr);
    --this->length;
}

void List::deleteFirstNode() {
    Node* currentNode = this->head;
    Node* nextNode = currentNode->getNext();
    delete currentNode;
    this->head = nextNode;
    --this->length;
}

void List::deleteIndexNode(int _index) {
    Node* currentNode = this->head;
    Node* prevNode = nullptr;
    if (_index >= this->length) {
        cout << "ERROR: El índice no existe.";
    }
    if (_index == 0) {
        Node* nextNode = currentNode->getNext();
        delete currentNode;
        this->head = nextNode;
    }
    for (int i = 1; i <= _index; ++i) {
        prevNode = currentNode;
        currentNode = currentNode->getNext();
    }
    Node* nextNode = currentNode->getNext();
    delete currentNode;
    prevNode->setNext(nextNode);
    --this->length;
}

void List::ascendingOrder() {
    int* listArr = new int[this->length];
    Node* currentNode = this->head;
    listArr[0] = currentNode->getValue();
    for (int i = 1; i < this->length; ++i) {
        currentNode = currentNode->getNext();
        listArr[i] = currentNode->getValue();
    }
    this->orderAscending(listArr, this->length);
    currentNode = this->head;
    currentNode->setValue(listArr[0]);
    for (int i = 1; i < this->length; ++i) {
        currentNode = currentNode->getNext();
        currentNode->setValue(listArr[i]);
    }
}

void List::descendingOrder() {
    int* listArr = new int[this->length];
    Node* currentNode = this->head;
    listArr[0] = currentNode->getValue();
    for (int i = 1; i < this->length; ++i) {
        currentNode = currentNode->getNext();
        listArr[i] = currentNode->getValue();
    }
    this->orderDescending(listArr, this->length);
    currentNode = this->head;
    currentNode->setValue(listArr[0]);
    for (int i = 1; i < this->length; ++i) {
        currentNode = currentNode->getNext();
        currentNode->setValue(listArr[i]);
    }
}

void List::printList() {
    Node* currentNode = this->head;
    if (currentNode == nullptr) {
        cout << "La lista está vacía." << endl;
    } else {
        while (currentNode->getNext() != nullptr) {
            cout << currentNode->getValue() << " -> ";
            currentNode = currentNode->getNext();
        }
        cout << currentNode->getValue() << endl;
    }
}

void List::orderAscending(int* arr, int length) {
    for (int i = 0; i < length; ++i) {
        for (int y = 0; y < length - 1; ++y) {
            if (arr[y] > arr[y + 1]) {
                int aux = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = aux;
            }
        }
    }
}

void List::orderDescending(int* arr, int length) {
    for (int i = 0; i < length; ++i) {
        for (int y = length - 1; y > 0; --y) {
            if (arr[y] > arr[y - 1]) {
                int aux = arr[y];
                arr[y] = arr[y - 1];
                arr[y - 1] = aux;
            }
        }
    }
}
