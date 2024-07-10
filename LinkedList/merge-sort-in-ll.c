// Program to perform merge sort in the linked list.
// Merge sort is a divide and conquer algorithm that was invented by John von Neumann in 1945.
// Merge sort is a comparison-based sorting algorithm that uses a divide-and-conquer approach to sort an array.
// Time Complexity: O(nlogn) in all cases.
// Space Complexity: O(n) in all cases.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(struct node *head, int x)
{
    struct node *current = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (current == NULL)
        return temp;
    while (current->next != NULL)
    {
        current = current->next;
    }
    if (current->next == NULL)
    {
        current->next = temp;
    }
    return head;
}

void printLL(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node *midLL(struct node *head)
{
    struct node *curr = head;
    struct node *slow = curr, *fast = curr;
    if (curr == NULL || curr->next == NULL)
        return head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct node *LLmerge(struct node *left, struct node *right)
{
    struct node *mergedll = NULL;
    struct node **mergedllPtr = &mergedll; // Pointer to pointer to build the merged list

    while (left != NULL && right != NULL)
    {
        if (left->data <= right->data)
        {
            *mergedllPtr = left;
            left = left->next;
        }
        else
        {
            *mergedllPtr = right;
            right = right->next;
        }
        mergedllPtr = &((*mergedllPtr)->next);
    }

    *mergedllPtr = (left == NULL) ? right : left;
    return mergedll;
}

struct node *mergeSort(struct node *head)
{
    struct node *curr = head;
    if (head == NULL || head->next == NULL)
        return head;

    // Now performing merge sort in the linked list.
    // 1. Splitting into two half.
    // 2. Recursively sort the two half.
    // 3. Merge the two sorted half by changing pointers (not data).

    struct node *midElm = midLL(curr);
    struct node *midNext = midElm->next;
    midElm->next = NULL;

    struct node *left = mergeSort(curr);
    struct node *right = mergeSort(midNext);

    curr = LLmerge(left, right);
    return curr;
}

int main()
{
    struct node *head = NULL;

    head = createNode(head, 50);
    head = createNode(head, 70);
    head = createNode(head, 20);
    head = createNode(head, 10);
    head = createNode(head, 60);
    head = createNode(head, 30);
    head = createNode(head, 40);

    printf("Unsorted Linked List are as follows : ");
    printLL(head);
    // Now performing merge sort in the linked list.

    head = mergeSort(head);

    printf("\nSorted Linked List are as follows : ");
    printLL(head);

    return 0;
}