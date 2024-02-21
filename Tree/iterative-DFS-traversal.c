// Program to implement all three ways of DFS( Depth First Search) in iterative way in tree.
// DFS( Depth First Search)
// 1. Pre-Order Traversal( Root Left Right).
// 2. In-Order Traversal( Left Root Right).
// 3. Post-Order Traversal( Left Right Root).

#include <stdio.h>
#include <stdlib.h>

// Tree Node Declaration
struct treeNode
{
    struct treeNode *left;
    int data;
    struct treeNode *right;
};

// stack node declaration
struct stackNode
{
    struct treeNode *treeNode;
    struct stackNode *next;
};

// Stack operation : Push & Pop
void push(struct stackNode **top, struct treeNode *treeNode)
{
    struct stackNode *s = (struct stackNode *)malloc(sizeof(struct stackNode));
    s->treeNode = treeNode;
    s->next = *top;
    *top = s;
}

struct treeNode *pop(struct stackNode **top)
{
    if (*top == NULL)
    {
        printf("Stack underflow! \n");
        return NULL;
    }
    struct treeNode *poppedElm = (*top)->treeNode;
    struct stackNode *temp = *top;
    *top = (*top)->next;
    free(temp);
    return poppedElm;
}

// Pre-order traversal function
void preOrderTraversal(struct treeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    struct stackNode *stack = NULL;
    push(&stack, root);

    while (stack != NULL)
    {
        struct treeNode *current = pop(&stack);
        printf("%d\t", current->data);

        if (current->right != NULL)
        {
            push(&stack, current->right);
        }

        if (current->left != NULL)
        {
            push(&stack, current->left);
        }
    }
}

// Function to create new treeNode.
struct treeNode *newNode(int val)
{
    struct treeNode *temp = (struct treeNode *)malloc(sizeof(struct treeNode));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Function to do preorder traversal in tree.
void preorder(struct treeNode *n)
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
    struct treeNode *root = newNode(10);

    // declaring the first level of the tree.
    root->left = newNode(20);
    root->right = newNode(30);

    // Second Level of the tree.
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);

    printf("calling preOrderTraversal function.\n");
    preOrderTraversal(root);

    return 0;
}