#include <stdio.h>
#include <iostream>
#include <vector>
#include "Node.h"

int main(){
    freopen("output.txt", "w", stdout);
    // Define individual nodess
    Node head = Node(3, nullptr);
    Node second = Node(1,nullptr);
    Node third = Node(4, nullptr);
    Node fourth = Node(0, nullptr);
    // 3 -> 1 -> 4 -> 0
    head.setNextNode(&second);
    second.setNextNode(&third);
    third.setNextNode(&fourth);
    // 
    head.printList();
    return 0;
}