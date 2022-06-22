#include "node.h"

Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
}

Node::~Node() {}

int Node::getValue() {
    return this->value;
}

Node* Node::getNext() {
    return this->next;
}

void Node::setNext(Node* _next) {
    this->next = _next;
}

void Node::setValue(int _value) {
    this->value = _value;
}
