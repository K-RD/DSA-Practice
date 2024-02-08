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

// Function to check whether queue is empty or not.
int isEmpty(struct queue *q)
{
    return (q->front == -1 && q->rear == -1);
}

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

// Function to insert an element in queue---> Enqueue.
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

// Function to delete an element from the queue--> Dequeue.
int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow! Cannot dequeue from an empty queue.");
        return -1;
    }
    else
    {
        int temp = q->arr[q->front];
        printf("Element %d deleted successfully from the queue.\n", temp);
        q->front++;
        return temp;
    }
}
// Traversal in queue.
void traversal(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("The Queue is empty.\n");
    }
    else
    {
        int temp = q->front;
        do
        {
            printf("Elements: %d \n", q->arr[temp]);
            temp++;
        } while (temp <= q->size - 1 && temp <= q->rear);
    }
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    creation(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    int temp = dequeue(q);
    enqueue(q, 40);
    enqueue(q, 50);
    int temp2 = dequeue(q);
    enqueue(q, 60);
    enqueue(q, 70);
    int temp3 = dequeue(q);
    enqueue(q, 80);
    enqueue(q, 90);
    enqueue(q, 100);
    enqueue(q, 110);
    traversal(q);

    return 0;
}