// Program to represent binary tree in c.

#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node.
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function to create newNode of the Tree.
struct node *newNode(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    // Declaring the root of the tree.
    struct node *root = newNode(1);

    // declaring the first level of the tree.
    root->left = newNode(2);
    root->right = newNode(3);

    // Second Level of the tree.
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    return 0;
}