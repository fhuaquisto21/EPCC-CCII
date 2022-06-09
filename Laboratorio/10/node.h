class Node {
    private:
        Node* next;
        int value;
    public:
        Node();
        Node(int);
        ~Node();
        Node* getNext();
        Node* setNext(Node*);
        int getValue();
        int setValue(int);
};
