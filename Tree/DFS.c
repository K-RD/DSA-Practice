// Program to implement all three ways of DFS( Depth First Search) in tree.
// DFS( Depth First Search)
// 1. Pre-Order Traversal( Root Left Right).
// 2. In-Order Traversal( Left Root Right).
// 3. Post-Order Traversal( Left Right Root).

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

// Function to do preorder traversal in tree.
void preorder(struct node *n)
{
    if (n == NULL)
    {
        return;
    }
    printf("%d\t", n->data);
    preorder(n->left);
    preorder(n->right);
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

    preorder(root);

    return 0;
}