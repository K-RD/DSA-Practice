// Program to implement all three ways of DFS( Depth First Search) in tree.
// DFS( Depth First Search)
// 1. Pre-Order Traversal( Root Left Right).
// 2. In-Order Traversal( Left Root Right).
// 3. Post-Order Traversal( Left Right Root).

#include <iostream>
using namespace std;

// Declaring the tree.
struct node
{
    struct node *left;
    int data;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Pre-Order Traversal.
void preorder(struct node *n)
{
    if (n == NULL)
    {
        return;
    }
    cout << n->data << "\t";
    preorder(n->left);
    preorder(n->right);
}

int main()
{
    // Declaring the root of the tree.
    struct node *root = new node(1);

    // declaring the first level of the tree.
    root->left = new node(2);
    root->right = new node(3);

    // Second Level of the tree.
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    preorder(root);

    return 0;
}