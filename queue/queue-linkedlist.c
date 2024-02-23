// Program to implement queue data structure using linked-list.

#include <stdio.h>
#include <stdlib.h>

// Linked-List declaration.
struct node
{
    int data;
    struct node *next;
};

// Queue declaration.
struct queue
{
    struct node *front;
    struct node *rear;
};

// function to create new node.
struct node *newNode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

// function to create new queue.
struct queue *newQueue()
{
    struct queue *temp = (struct queue *)malloc(sizeof(struct queue));
    temp->front = NULL;
    temp->rear = NULL;
    return temp;
}

// function to enqueue node in queue.
void enqueue(struct queue *q, int val)
{
    struct node *temp = newNode(val);
    if (q->front == NULL)
    {
        q->front = temp;
        q->rear = temp;
    }
    else
    {
        q->rear->next = temp;
        q->rear = temp;
    }
}

// function to deque nodes from queue.
struct node *dequeue(struct queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue Underflow!");
        return NULL;
    }
    struct node *temp = q->front;
    q->front = q->front->next; // If current node is last node then its next will be NULL.
    return temp;
}

int main()
{
    struct queue *q1 = newQueue();
    enqueue(q1, 10);
    enqueue(q1, 20);
    enqueue(q1, 30);
    enqueue(q1, 40);

    struct node *temp;

    while ((temp = dequeue(q1)) != NULL)
    {
        printf("%d\n", (temp->data));
    }

    return 0;
}