// Program to delete elements in all the following cases in linked lists.
// case 1: Deleting the first node.
// case 2: Deleting a node at the given index.
// case 3: Deleting the last node.
// case 4: Deleting the first node with a given value.

#include <stdio.h>
#include <stdlib.h>

// Declaring the node structure.
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

// case 1: Deleting the first node.
struct node *deleteAtBeginning(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// case 2: Deleting the node at any given index.
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    struct node *tempNode = temp->next;
    temp->next = tempNode->next;
    free(tempNode);
    return head;
}

// case 3: Deleting the last node.
struct node *deleteAtEnd(struct node *head)
{
    struct node *temp = head;
    while ((temp->next)->next != NULL)
    {
        temp = temp->next;
    }
    struct node *tempNode = temp->next;
    temp->next = NULL;
    free(tempNode);
    return head;
}

// case 4: Deleting the first node with the given value.
struct node *deleteFirstOccurrence(struct node *head, int val)
{
    struct node *temp = head;
    while ((temp->next)->data != val)
    {
        temp = temp->next;
    }
    struct node *tempNode = temp->next;
    temp->next = tempNode->next;
    free(tempNode);
    return head;
}

int main()
{
    //  Declaring all the node of the linked list.
    struct node *head, *first, *second, *third, *fourth, *fifth, *sixth, *seven, *eight, *nine, *ten;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));
    seven = (struct node *)malloc(sizeof(struct node));
    eight = (struct node *)malloc(sizeof(struct node));
    nine = (struct node *)malloc(sizeof(struct node));
    ten = (struct node *)malloc(sizeof(struct node));

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
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 70;
    sixth->next = seven;

    seven->data = 80;
    seven->next = eight;

    eight->data = 90;
    eight->next = nine;

    nine->data = 100;
    nine->next = ten;

    ten->data = 110;
    ten->next = NULL;

    // Function to print all elements of the linked list.
    printAllElements(head);

    // calling deleteAtBeginning function to delete 10 at the beginning of the linked list.
    // deleteAtBeginning(struct node *head, int data);
    printf("\nDeleting from the beginning of the linked list.\n");
    head = deleteAtBeginning(head);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // Calling deleteInBetween function to delete 25 at index 3 in the linked list.
    // deleteInBetween(struct node *head, int data, int index);
    printf("\nDeleting node at index 3 in the linked list.\n");
    head = deleteAtIndex(head, 3);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // calling deleteAtEnd() function to delete 60 at the end of linked list.
    // deleteAtEnd(struct node *head, int data);
    printf("\nDeleting last node of the linked list.\n");
    head = deleteAtEnd(head);

    // Function to print all elements of the linked list.
    printAllElements(head);

    // delete a node after third node.s
    // deleteAfterNode(struct node *previousNode, int data);
    printf("\nDeleting the first occurrence of 40.\n");
    deleteFirstOccurrence(head, 40);

    // Function to print all elements of the linked list.
    printAllElements(head);
    return 0;
}