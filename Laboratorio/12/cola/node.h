class Node {
    private:
        int value;
        Node* next;
    public:
        Node(int);
        ~Node();
        int getValue();
        Node* getNext();
        void setValue(int);
        void setNext(Node*);
};
