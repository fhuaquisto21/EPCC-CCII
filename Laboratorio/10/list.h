#include "node.cpp"

class List {
    private:
        Node* head;
        int length;
        void orderAscending(int*, int);
        void orderDescending(int*, int);
    public:
        List();
        List(int);
        ~List();
        Node* addLastNode(int);
        Node* addFirstNode(int);
        Node* addIndexNode(int, int);
        void deleteLastNode();
        void deleteFirstNode();
        void deleteIndexNode(int);
        void ascendingOrder();
        void descendingOrder();
        void printList();
};
