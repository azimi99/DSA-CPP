#include <stdio.h>

typedef struct Node {
    int value;
    Node* left;
    Node* right;
    Node()=default;
    Node(int value);
} Node;