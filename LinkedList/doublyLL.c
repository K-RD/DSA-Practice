// Program to create doubly linked list.

#include <stdio.h>
#include <stdlib.h>

// Declaration of node structure.
struct node
{
    struct node *previous;
    int data;
    struct node *next;
};

// Function to create a new node.
struct node *createNode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->previous = NULL;
    temp->next = NULL;
    temp->data = val;
    return temp;
}

// Function to insert a node at the end.
void insert(struct node *root, int val)
{
    while (root->next != NULL)
    {
        root = root->next;
    }
    struct node *temp = createNode(val);
    root->next = temp;
    temp->previous = root;
}

// Function to print all element of the linked list.
void traversal(struct node *root)
{
    printf("Printing the traversal of the linked list.\n");
    struct node *base = root;
    while (base != NULL)
    {
        printf("%d\t", base->data);
        base = base->next;
    }
    printf("\n");
}

int main()
{
    struct node *root = createNode(10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 50);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);

    traversal(root);

    return 0;
}