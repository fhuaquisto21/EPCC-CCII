#include <iostream>
#include "node.h"

Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
}

Node::~Node() {}

Node* Node::getNext() {
    return this->next;
}

int Node::getValue() {
    return this->value;
}

void Node::setNext(Node* _next) {
    this->next = _next;
}

void Node::setValue(int _value) {
    this->value = _value;
}
