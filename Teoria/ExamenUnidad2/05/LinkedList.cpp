#include "Node.h"
#include "LinkedList.h"

LinkedList::LinkedList() {
    this->size = 0;
    this->head = nullptr;
}

LinkedList::LinkedList(int value) {
    this->size = 1;
    this->head = new Node(value);
}

LinkedList::LinkedList(const LinkedList &o) {
    this->size = 0;
    this->head = nullptr;
    Node* actual_o = o.head;
    while(actual_o)
    {
        this->insert(actual_o->getValue());
        actual_o = actual_o->getNext();
    }

}

LinkedList::~LinkedList() {
    Node *actual;
    while (head!=nullptr){
        actual = head->getNext();
        delete head;
        head = actual;
    }
    delete head;
}

void LinkedList::insert(int value) {
    Node *newNode = new Node(value);
    Node *tmp = head;
    if(head==nullptr){
        head = newNode;
    } else {
        if (head->getValue() > value) {
            newNode->setNext(head);
            head = newNode;
        } else {
            while ( (tmp->getNext() != nullptr) &&
                        (tmp->getNext()->getValue() < value) )
            {
                tmp = tmp->getNext();
            }
            newNode->setNext(tmp->getNext());
            tmp->setNext(newNode);
        }
    }
    size++;
}

void LinkedList::removeByPosition(int posicion) {
    if(posicion<size){
        Node *aux, *actual=head;
        if (posicion!=0){
            int i=0;
            while(i<posicion){
                aux = actual; actual = actual->getNext();
                i++;
            }
            aux -> setNext( actual->getNext() ); delete actual;
        }
        else{
            head = head -> getNext(); delete actual;
        }
        size--;
    }
}

void LinkedList::removeByValue(int value) {
    Node *actual = head;
    int position=0;
    if(size != 0){
        while (actual!=nullptr){
            if ( value == actual->getValue() ){
                removeByPosition(position); break;
            }
            position++; actual = actual->getNext();
        }
    }
}

bool LinkedList::search(int value) {    
    Node *tmp = head;
    
    while(tmp != nullptr ){
        if(tmp->getValue()==value){
            return true;
        }
        tmp = tmp->getNext();
    }    
    return false;
}

std::ostream& operator <<(std::ostream &salida1,const LinkedList& C){
    Node* actual = C.head;
    salida1 <<" [ ";
    while(actual!=nullptr){
        salida1 << actual->getValue()<<" ";
        actual = actual->getNext();
    }
     salida1 << "] ";
    return salida1;
}


LinkedList& operator +(const LinkedList &A, const LinkedList &B) {
    LinkedList *lista = new LinkedList();
    Node* actual = A.head;
    while(actual != nullptr) {
        lista->insert(actual->getValue());
        actual = actual->getNext();
    }

    actual = B.head;
    while(actual != nullptr) {
        lista->insert(actual->getValue());
        actual = actual->getNext();
    }

    return *lista;
}

