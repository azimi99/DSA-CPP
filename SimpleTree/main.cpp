#include <stdio.h>
#include "Node.h"

void printInOrder(Node *node, char side)
{
    if (side == 'l')
    { // if it's not root
        printf(" =>(");
    }

    if(node != nullptr)
    {

        printf("%d", node->value);
        printInOrder(node->left, 'l');
        printf(", ");
        printInOrder(node->right, 'r');
        printf(")");
    }
}

int main()
{
    // Construct Tree
    freopen("output.txt", "w", stdout);
    Node root = Node(3);
    Node n1 = Node(5);
    Node n2 = Node(6);
    Node n3 = Node(1);
    Node n4 = Node(9);
    root.left = &n1;
    root.right = &n2;
    n2.left = &n3;
    n2.right = &n4;
    // Print tree in order
    //          3
    //         / \
    //        5   6
    //           / \
    //          1   9 
    printInOrder(&root, ' ');
    return 0;
}