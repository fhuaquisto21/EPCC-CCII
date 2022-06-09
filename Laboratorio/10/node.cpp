#include "node.h"

Node::~Node() {}

Node::Node() {
    this->value = 0;
    this->next = nullptr;
}

Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
}

Node* Node::getNext() {
    return this->next;
}

Node* Node::setNext(Node *_next) {
    this->next = _next;
    return this->next;
}

int Node::setValue(int _value) {
    this->value = _value;
    return this->value;
}

int Node::getValue() {
    return this->value;
}
