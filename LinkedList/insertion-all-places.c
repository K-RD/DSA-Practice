// Program to insert elements in a linked list in following cases:
// 1. Inserting at the beginning       -> Time complexity:  O(1)
// 2. Inserting in between             -> Time complexity:  O(n)
// 3. Inserting at the end             -> Time complexity:  O(n)
// 4. Inserting after a given Node     -> Time complexity:  O(1)

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Printing all the elements of the linked list.
void printAllElements(struct node *head)
{
    struct node *newNode = head;
    printf("Printing all the elements of the linked list.\n");
    while (newNode != NULL)
    {
        printf("%d\t", newNode->data);
        newNode = newNode->next;
    }
    printf("\n");
    printf("\n");
}
// case 1: Inserting at the beginning of the linked list.
struct node *insertAtBeginning(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// case 2: Insert in between of the node in linked list.
struct node *insertInBetween(struct node *head, int data, int index)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    newNode->data = data;
    newNode->next = ptr->next;
    ptr->next = newNode;
    return head;
}

// case 3: Inserting a node at the end of the linked list.
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = data;
    newNode->next = NULL;
    return head;
}

// case 4: Insert a node after a given node in linked list.
void insertAfterNode(struct node *beforeNode, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = beforeNode->next;
    beforeNode->next = newNode;
}

int main()
{
    //  Declaring all the node of the linked list.
    struct node *head, *first, *second, *third, *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Initializing & connecting each node of the linked list.
    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    // Function to print all elements of the linked list.
    printAllElements(head);

    // calling insertAtBeginning function to insert 5 at the beginning of the linked list.
    // insertAtBeginning(struct node *head, int data);
    printf("\nInserting 5 at the beginning of the linked list.\n");
    head = insertAtBeginning(head, 5);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // Calling insertInBetween function to insert 25 at index 3 in the linked list.
    // insertInBetween(struct node *head, int data, int index);
    printf("\nInserting 25 at index 3 in the linked list.\n");
    head = insertInBetween(head, 25, 3);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // calling insertAtEnd() function to insert 60 at the end of linked list.
    // insertAtEnd(struct node *head, int data);
    printf("\nInserting 60 at the end of linked list.\n");
    head = insertAtEnd(head, 60);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // insert a node after third node.s
    // insertAfterNode(struct node *previousNode, int data);
    printf("\nInserting node containing 45 after node containing 40.\n");
    insertAfterNode(third, 45);

    // Function to print all elements of the linked list.
    printAllElements(head);

    return 0;
}