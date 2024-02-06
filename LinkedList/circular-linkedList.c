// Program to create circular linked list.

#include <stdio.h>
#include <stdlib.h>

// Declaring the node structure.
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

// printing all elements from the beginning.
void printElementsFromBeginning(struct node *head)
{
    struct node *tempNode = head;
    printf("Printing all the elements of the linked list from beginning.\n");
    do
    {
        printf("%d\t", tempNode->data);
        tempNode = tempNode->next;
    } while (tempNode != head);
    printf("\n");
    printf("\n");
}

// print all elements from the end.
void printElementsFromEnd(struct node *end)
{
    struct node *tempNode = end;
    printf("Printing all the elements of the linked list from end.\n");
    do
    {
        printf("%d\t", tempNode->data);
        tempNode = tempNode->prev;
    } while (tempNode != end);
    printf("\n");
    printf("\n");
}

int main()
{
    //  Declaring all the node of the linked list.
    struct node *head, *first, *second, *third, *fourth, *fifth, *sixth, *seven, *eight, *nine, *ten, *end;
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
    end = (struct node *)malloc(sizeof(struct node));

    // Initializing & connecting each node of the linked list.
    head->prev = end;
    head->data = 10;
    head->next = first;

    first->prev = head;
    first->data = 20;
    first->next = second;

    second->prev = first;
    second->data = 30;
    second->next = third;

    third->prev = second;
    third->data = 40;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 50;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 60;
    fifth->next = sixth;

    sixth->prev = fifth;
    sixth->data = 70;
    sixth->next = seven;

    seven->prev = sixth;
    seven->data = 80;
    seven->next = eight;

    eight->prev = seven;
    eight->data = 90;
    eight->next = nine;

    nine->prev = eight;
    nine->data = 100;
    nine->next = ten;

    ten->prev = nine;
    ten->data = 110;
    ten->next = end;

    end->prev = ten;
    end->data = 120;
    end->next = head;

    // Function to print all elements of the linked list from the beginning.
    printElementsFromBeginning(head);

    // Function to print all elements of the linked list from the beginning.
    printElementsFromBeginning(end);
    return 0;
}