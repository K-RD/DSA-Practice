// Program to implement queue using array.

#include <stdio.h>
#include <stdlib.h>

// Declaring queue structure.
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

// Function to check whether a queue is full or not.
int isFull(struct queue *q)
{
    return (q->rear == q->size - 1);
}

// Function to create queue of given size.
void creation(struct queue *q, unsigned int size)
{
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(size * sizeof(int));
}

// function to insert an element in queue---> Enqueue.
void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue overflow! Element cannot be inserted.\n");
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->rear++;
        q->front = 0;
        q->arr[q->rear] = data;
        printf("Element %d inserted successfully in the queue.\n", data);
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
        printf("Element %d inserted successfully in the queue.\n", data);
    }
}

// Traversal in queue.
void traversal(struct queue *q)
{
    int temp = q->front;
    do
    {
        printf("Elements: %d \n", q->arr[temp]);
        temp++;
    } while (temp > !q->size - 1 && temp != q->rear);
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    creation(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60);
    enqueue(q, 70);
    enqueue(q, 80);
    enqueue(q, 90);
    enqueue(q, 100);
    enqueue(q, 110);
    traversal(q);

    return 0;
}