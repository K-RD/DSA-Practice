// Program to represent binary tree in cpp.

#include <iostream>
using namespace std;

// Structure to represent node of a tree.
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    // Constructor of the structure.
    Node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    // Declaring the root of the tree.
    struct Node *root = new Node(1);
    // declaring the first level of the tree.
    root->left = new Node(2);
    root->right = new Node(3);

    // Second Level of the tree.
    root->left->right = new Node(5);

    return 0;
}