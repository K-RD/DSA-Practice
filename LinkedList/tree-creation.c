// Program to represent the tree structure.

#include <stdio.h>
#include <stdlib.h>

// Defining the treeNode structure of the tree.
struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};

// Function to create new nodes.
struct treeNode *creation(int data)
{
    struct treeNode *newNode = (struct treeNode *)malloc(sizeof(struct treeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// function to insert new Nodes in tree.
struct treeNode *insertion(struct treeNode *root, int data)
{
    if (root == NULL)
    {
        root = creation(data);
    }
    else if (data <= root->data)
    {
        root->left = insertion(root->left, data);
    }
    else
    {
        root->right = insertion(root->right, data);
    }
    return root;
}

int main()
{
    struct treeNode *root = NULL;

    // Insert nodes into the binary tree
    root = insertion(root, 10);
    root = insertion(root, 5);
    root = insertion(root, 15);
    root = insertion(root, 7);
    root = insertion(root, 12);

    // Perform inorder traversal
    printf("Inorder traversal: ");
    // inorderTraversal(root);
    printf("\n");
    return 0;
}