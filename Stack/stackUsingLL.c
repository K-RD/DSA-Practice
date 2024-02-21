// Program to implement stack using linked list.

#include <stdio.h>
#include <stdlib.h>

// Declaring the structure of the linked list node.
struct node
{
    int data;
    struct node *next;
};

// Declaring the stack data structure.
struct stack
{
    // top pointer pointing to the top element in the stack.
    struct node *top;
};

// Function to create a new node of linked list.
struct node *createNode(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;
    return n;
}

// Function to create an empty stack.
struct stack *createStack()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = NULL;
    return s;
}

// Function to check whether stack is empty.
int isEmpty(struct stack *s)
{
    return (s->top == NULL);
}

// Fuction to push data in a stack.
void push(struct stack *s, int val)
{
    struct node *n = createNode(val);
    n->next = s->top;
    s->top = n;
    printf("%d pushed to stack\n", val);
}

// Function to pop an element from the stack.
int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct node *temp = s->top;
    s->top = temp->next;
    // printf("%d popped from the stack\n", temp->data);
    int val = temp->data;
    free(temp);
    return val;
}

// Function to peek in the stack.
int peek(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return (s->top->data);
}

int main()
{
    struct stack *s = createStack();

    push(s, 10);
    push(s, 20);
    push(s, 30);

    printf("%d popped from stack\n", pop(s));

    printf("Top element is %d\n", peek(s));
    return 0;
}