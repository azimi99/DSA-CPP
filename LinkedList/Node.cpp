#include <stdio.h>
#include "Node.h"
void Node::printList(){
    Node* node = this;
    while(node != nullptr){
        printf("%d ", node->value);
        node = node->nextNode;
    }
    printf("\n");
}

void Node::setNextNode(Node* node){
    Node::nextNode = node;
}