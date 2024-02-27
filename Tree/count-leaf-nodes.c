// Program to count number of leaf nodes in binary tree.

#include <stdio.h>
#include <stdlib.h>

// Declaration of node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node *createNode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Function to count leaf nodes.
int countLeafNodes(struct node *current)
{
    if (current == NULL)
    {
        return 0;
    }
    if (current->left == NULL && current->right == NULL)
    {
        return 1;
    }
    else
    {
        return countLeafNodes(current->left) + countLeafNodes(current->right);
    }
}

int main()
{
    // Declaring the root of the tree.
    struct node *root = createNode(10);

    // declaring the first level of the tree.
    root->left = createNode(20);
    root->right = createNode(30);

    // Second Level of the tree.
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);

    int noOfLeaf = countLeafNodes(root);

    printf("%d leaf nodes are in the tree.\n", noOfLeaf);

    return 0;
}