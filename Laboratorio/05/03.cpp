#include <iostream>

using namespace std;

class Node {
    public:
        Node *next;
        int value;

        Node(int _value) {
            this->value = _value;
            this->next = NULL;
        }
};

class List {
    public:
        Node * head;
        int length;

        List(int _value) {
            this->head = new Node(_value);
            this->length = 1;
        }

        void addNode(int _value) {
            Node *newNode = new Node(_value);
            Node *tempNode = this->head;
            for (int i = 0; i < this->length - 1; ++i) {
                tempNode = tempNode->next;
            }
            tempNode->next = newNode;
            ++this->length;
        }

        void deleteNode(int _num) {
            Node *tempNode = this->head;
            Node *prevNode = NULL;
            bool search = false;
            for (int i = 0; i < this->length; ++i) {
                if (tempNode->value == _num) {
                    search = true;
                    break;
                }
                prevNode = tempNode;
                tempNode = tempNode->next;
            }

            prevNode->next = tempNode->next;
            delete tempNode;
            --this->length;
        }

        void showList() {
            Node *auxNode;
            auxNode = this->head;
            while (auxNode->next != NULL) {
                printf("%i  <->  ", auxNode->value);
                auxNode = auxNode->next;
            }
            printf("%i\n", auxNode->value);
        }
};

int main() {
    List *enlace = new List(0);
    for (int i = 1; i <= 10000; ++i) {
        enlace->addNode(i);
    }
    enlace->showList();
    delete enlace;
    return 0;
}
