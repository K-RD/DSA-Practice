// Stack implementation in c language using array.

#include<stdio.h>
#include<stdlib.h>

struct stack{
  int *arr;
  int len;
  int top;
};

void push(struct stack *st,int val)
{
  if(st->top < st->len - 1 )
  {
    st->top++;
    st->arr[st->top] = val;
    printf("\n%d pushed into stack\n", val);
  }else{
    printf("\ncannot push into stack, stack overflow!\n");
  }
}

void pop(struct stack *st)
{
  if(st->top > -1 )
  {
    st->arr[st->top--] = 0;
    printf("\npopped from stack\n");
  }else{
    printf("\ncannot push into empty stack, stack underflow!\n");
  }
}

int peek(struct stack *st)
{
  if(st->top > -1 )
  {
    int res = st->arr[st->top];
    return res;
  }else{
    printf("\ncannot peek into empty stack\n");
  }
  return -1;
}

struct stack * createStack(int len)
{
  struct stack *st = (struct stack * ) malloc(sizeof(struct stack));
  st->arr = (int *) malloc(sizeof(int) * len);
  st->top = -1;
  st->len = len;

  return st;
}
  

int main()
{
  struct stack *st = createStack(100);
  push(st, 100);
  push(st, 90);
  push(st, 80);
  push(st, 70);
  push(st, 60);
  pop(st);
  pop(st);
  int res = peek(st);
  printf("\nTop value is %d\n", res);



  return 0;
}
