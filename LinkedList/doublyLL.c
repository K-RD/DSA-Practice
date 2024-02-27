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

    root->next = createNode(20);
    root->next->previous = root->next;

    root->next->next = createNode(30);
    root->next->next->previous = root->next->next;

    root->next->next->next = createNode(40);
    root->next->next->next->previous = root->next->next->next;

    root->next->next->next->next = createNode(50);
    root->next->next->next->next->previous = root->next->next->next->next;

    traversal(root);

    return 0;
}