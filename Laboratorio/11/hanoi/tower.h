#include "node.cpp"

class Tower {
    private:
        Node* head;
        void addNode(int);
    public:
        Tower(int);
        ~Tower();
        Node* getHead();
        int push(int);
        int pop();
        void printTower();
};
