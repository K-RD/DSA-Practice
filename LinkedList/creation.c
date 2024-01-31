// Implementing Linked List using c programming language.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printElements(struct node *n)
{
    while ((*n).next != NULL)
    {
        printf("element: %d \n", (*n).data);
        n = n->next;
    }
}

int main()
{
    struct node *head, *first, *second, *third, *last;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    // Assigning value to the head node
    // Then assigning memory address of the next node.
    head->data = 10;
    head->next = first;

    // Assigning value to the first node
    // Then assigning memory address of the next node.
    first->data = 20;
    first->next = second;

    // Assigning value to the head node
    // Then assigning memory address of the next node.
    second->data = 30;
    second->next = third;

    // Assigning value to the head node
    // Then assigning memory address of the next node.
    third->data = 40;
    third->next = last;

    // Assigning value to the last node.
    // Assigning memory address as NULL because it is last element.
    (*last).data = 50;
    (*last).next = NULL;

    // Printing all elements.
    printElements(head);

    return 0;
}