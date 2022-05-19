#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
        Node *next;
        int valueI;
        float valueF;
        string valueS;
        string type;

        Node(int _value) {
            this->valueI = _value;
            this->type = "int";
            this->next = NULL;
        }

        Node(float _value) {
            this->valueF = _value;
            this->type = "float";
            this->next = NULL;
        }

        Node(string _value) {
            this->valueS = _value;
            this->type = "string";
            this->next = NULL;
        }
};

class List {
    public:
        Node * head;
        int length;

        template <typename T>
        List(T _value) {
            this->head = new Node(_value);
            this->length = 1;
        }

        template <typename T>
        void addNode(T _value) {
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
            for (int i = 0; i < this->length; ++i) {
                if (i + 1 == _num) {
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
                string typeNode = auxNode->type;
                if (typeNode == "int") {
                    printf("%i  <->  ", auxNode->valueI);
                } else if (typeNode == "float") {
                    printf("%.2f  <->  ", auxNode->valueF);
                } else if (typeNode == "string") {
                    printf("%s  <->  ", auxNode->valueS.c_str());
                }

                auxNode = auxNode->next;
            }
            string typeNode = auxNode->type;
            if (typeNode == "int") {
                printf("%i\n", auxNode->valueI);
            } else if (typeNode == "float") {
                printf("%.2f\n", auxNode->valueF);
            } else if (typeNode == "string") {
                printf("%s\n", auxNode->valueS.c_str());
            }
        }
};

void showMenu() {
    printf("MENU\n");
    printf("[1] Agregar dato (int)\n");
    printf("[2] Agregar dato (float)\n");
    printf("[3] Agregar dato (string)\n");
    printf("[4] Mostrar lista enlazada\n");
    printf("[0] Salir\n");
    printf("Select: ");
}

int main() {
    string start = "inicio";
    List *enlace = new List(start);
    int opt;
    do {
        showMenu();
        cin >> opt;
        switch (opt) {
            case 1:
                {
                    int valueI;
                    printf("Value (int): ");
                    cin >> valueI;
                    enlace->addNode(valueI);
                    cout << endl;
                    break;
                }
            case 2:
                {
                    float valueF;
                    printf("Value (float): ");
                    cin >> valueF;
                    enlace->addNode(valueF);
                    cout << endl;
                    break;
                }
            case 3:
                {
                    string valueS;
                    printf("Value (string): ");
                    cin >> valueS;
                    enlace->addNode(valueS);
                    cout << endl;
                    break;
                }
            case 4:
                {
                    enlace->showList();
                    cout << endl;
                }
        }

    } while (opt != 0);
    delete enlace;
    return 0;
}
