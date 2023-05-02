#ifndef LinkedList
#include <stdio.h>

class Node {
    Node* nextNode;
    int value;
public:
    Node()=default;
    Node(int val, Node* node){
        nextNode = node;
        value = val;
    }
    void printList();
    void setNextNode(Node* node);
};
#endif