// Stack implementation using linkedlist in c.

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* previous;
};

struct stack{
  struct node *top;
};

void push(struct stack *st, int val)
{
  struct node *temp = (struct node *) malloc(sizeof(struct node));
  temp->data = val;
  temp->previous = st->top;
  
  st->top = temp;
  printf("\npushed %d into stack\n",val);
}

void pop(struct stack *st )
{
  if(st->top != NULL )
  {
    st->top = st->top->previous;
    printf("\nPopped from the stack\n");
  }else{
    printf("\nStack underflow, cannot pop from empty stack\n");
  }
}

int peek(struct stack *st)
{
  if(st->top != NULL )
  {
    int res = st->top->data;
    return res;
  }else{
    printf("\nCannot peek from empty stack\n");
  }
  return -1;
}

struct stack * createStack()
{
  // struct node *temp = ( struct node * ) malloc( sizeof(struct node));
  struct stack *st = (struct stack *) malloc(sizeof(struct stack));
  st->top = NULL;

  return st;
}

int main()
{
  struct stack *st = createStack();

  push(st, 100);
  push(st, 90);
  push(st, 80);
  push(st, 70);
  push(st, 60);
  push(st, 50);
  push(st, 40);
  push(st, 30);

  printf("\n top value is %d\n", peek(st));
  pop(st);
  printf("\n top value is %d\n", peek(st));
  pop(st);
  printf("\n top value is %d\n", peek(st));
  pop(st);
  printf("\n top value is %d\n", peek(st));
  pop(st);
  printf("\n top value is %d\n", peek(st));
  pop(st);
  printf("\n top value is %d\n", peek(st));

  return 0;
}
