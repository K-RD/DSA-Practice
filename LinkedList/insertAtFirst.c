// Program to insert element in a linked list at the beginning position.

#include <stdio.h>
#include <stdlib.h>

// Linked List Declaration.
struct Node
{
    int data;
    struct Node *next;
};

// Declaring the type of node to be struct Node.
typedef struct Node node;

// Declaring the HEAD & LAST node.
node *head = NULL;
node *last = NULL;

void insertAtBeginning(int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    (*temp).next = head;
    (head) = (temp);
}

void printAllElements()
{
    node *n = head;

    while (n != NULL)
    {
        printf("Element : %d \n", n->data);
        n = n->next;
    }
}

int tempMain()
{
    // Declaring 10 elements;
    node *first, *second, *third, *fourth, *fifth, *last;

    // Allocating memory to each element
    head = (node *)malloc(sizeof(node));
    first = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    fifth = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    // Assigning head as first node.
    head = first;

    // Initialization of each element of node.
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = last;

    last->data = 60;
    last->next = NULL;

    printf("\nPrinting each elements: \n");
    printAllElements();
    //  Inserting an element at the beginning.
    insertAtBeginning(5);
    printf("\nPrinting each elements: \n");
    printAllElements();

    return 0;
}

int main()
{
    int noOfElements;
    printf("Enter the no of elements you want to insert in the linked list: ");
    scanf("%d", &noOfElements);

    head = (node *)malloc(sizeof(node));

    node *iterator = head;
    for (int i = 0; i < noOfElements; i++)
    {
        node *temp = (node *)malloc(sizeof(node));
        printf("Enter the value that you want to insert: ");
        int val;
        scanf("%d", &val);
        iterator->data = val;
        if (i == noOfElements - 1)
        {
            iterator->next = NULL;
        }
        else
        {
            iterator->next = temp;
        }
        iterator = temp;
    }

    printf("\nPrinting each elements: \n");
    printAllElements();
    //  Inserting an element at the beginning.
    insertAtBeginning(5);
    printf("\nPrinting each elements: \n");
    printAllElements();

    return 0;
}