// Program to implement level-order traversal using queue data structure using following approach.
// 1. treeNode -> node of tree.
// 2. queue -> creating queue.
// 3. queueNode -> node containing address of current treeNode and next treeNode.

#include <stdio.h>
#include <stdlib.h>

// Linked-List declaration.
struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};

// node declaration to save current treeNode then point to next treeNode in queue.
struct queueNode
{
    struct treeNode *current;
    struct queueNode *next;
};

// Queue declaration.
struct queue
{
    struct queueNode *front;
    struct queueNode *rear;
};

// function to create new treeNode.
struct treeNode *newNode(int val)
{
    struct treeNode *temp = (struct treeNode *)malloc(sizeof(struct treeNode));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
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

// function to create new queueNode.
struct queueNode *newQueueNode(struct treeNode *tn)
{
    struct queueNode *qn = (struct queueNode *)malloc(sizeof(struct queueNode));
    qn->current = tn;
    qn->next = NULL;
    return qn;
}

// function to enqueue treeNode in queue.
void enqueue(struct queue *q, struct treeNode *tn)
{
    struct queueNode *qn = newQueueNode(tn);
    if (q->front == NULL)
    {
        q->front = qn;
        q->rear = qn;
    }
    else
    {
        q->rear->next = qn;
        q->rear = qn;
    }
}

// function to deque treeNodes from queue.
struct treeNode *dequeue(struct queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue Underflow!");
        return NULL;
    }
    struct queueNode *temp = q->front;
    q->front = q->front->next; // If current queueNode is last queueNode then its next will be NULL.
    return temp->current;
}

// function to show level order traversal of the tree.
void levelOrderTraversal(struct treeNode *root)
{
    struct treeNode *current = root;

    struct queue *q1 = newQueue();
    enqueue(q1, current);

    while (q1->front != NULL)
    {
        struct treeNode *active = dequeue(q1);
        printf("%d\n", active->data);

        if (active->left != NULL)
        {
            enqueue(q1, active->left);
        }

        if (active->right != NULL)
        {
            enqueue(q1, active->right);
        }
    }
}

int main()
{
    // Declaring the root of the tree.
    struct treeNode *root = newNode(10);

    // declaring the first level of the tree.
    root->left = newNode(20);
    root->right = newNode(30);

    // Second Level of the tree.
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);

    printf("\ncalling levelOrderTraversal function.\n");
    levelOrderTraversal(root);

    return 0;
}