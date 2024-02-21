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

// Function to print the in-order traversal of the tree.
void inorder(struct node *n)
{
    if (n == NULL)
    {
        return;
    }
    inorder(n->left);
    printf("%d\t", n->data);
    inorder(n->right);
}

// Function to print the post order traversal of the tree.
void postorder(struct node *n)
{
    if (n == NULL)
    {
        return;
    }
    postorder(n->left);
    postorder(n->right);
    printf("%d\t", n->data);
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

    // Calling function to print preorder traversal of the tree.
    printf("\nPrinting the preorder of the tree:: \n");
    preorder(root);

    // Calling function to print in-order traversal of the tree.
    printf("\nPrinting the in-order of the tree:: \n");
    inorder(root);

    // Calling function to print post-order traversal of the tree.
    printf("\nPrinting the post-order of the tree:: \n");
    postorder(root);

    return 0;
}