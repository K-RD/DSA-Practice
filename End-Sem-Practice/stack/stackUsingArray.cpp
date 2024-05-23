#include<iostream>
using namespace std;

struct stack{
  int top;
  int length;
  int *arr;
};

void push(stack *st, int val)
{
  if(st->top < st->length)
  {
    st->top++;
    st->arr[st->top] = val;
  }else{
    cout << "Stack overflow!" << endl;
  }
}

void pop(stack *st)
{
  if(st->top > -1)
  {
    st->arr[st->top] = 0;
    st->top--;
  }else{
    cout << "Stack underflow!" << endl;
  }
}

int peek(stack *st)
{
  if(st->top > -1)
  {
    int res = st->arr[st->top];
    return res;
  }else{
    return -1;
  }
}


int main()
{
  stack st;
  st.top = -1;
  st.length = 100;
  st.arr = new int[100];

  push(&st,20);
  push(&st,30);
  push(&st,40);
  push(&st,50);
  push(&st,60);
  push(&st,70);
  push(&st,80);
  push(&st,90);
  push(&st,100);
  push(&st,110);
  cout << peek(&st) << endl;
  pop(&st);
  cout << peek(&st) << endl;
  pop(&st);
  cout << peek(&st) << endl;
  pop(&st);
  cout << peek(&st) << endl;
  pop(&st);
  cout << peek(&st) << endl;
  pop(&st);
  cout << peek(&st) << endl;
  pop(&st);

  return 0;

}
