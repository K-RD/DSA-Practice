#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

struct stack{
  node *top;
};

void push(stack &st, int value)
{
  node *newNode = new node;
  newNode->data = value;
  newNode->next = st.top;
  st.top = newNode;
  cout << "Pushed: " << value << endl;
}

int pop(stack &st) {
    if (st.top == nullptr) {
        cout << "Stack is empty. Cannot pop." << endl;
        return -1; // Return an error value
    } else {
        int poppedValue = st.top->data;
        node* temp = st.top;
        st.top = st.top->next;
        delete temp;
        cout << "Popped: " << poppedValue << endl;
        return poppedValue;
    }
}

int peek(stack st) {
    if (st.top == nullptr) {
        cout << "Stack is empty. Cannot peek." << endl;
        return -1; // Return an error value
    } else {
        cout << "Top element: " << st.top->data << endl;
        return st.top->data;
    }
}

void display(stack st) {
    if (st.top == nullptr) {
        cout << "Stack is empty." << endl;
    } else {
        node* current = st.top;
        cout << "Stack elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main()
{
  stack st;

  push(st, 20);
  push(st, 30);
  push(st, 40);
  push(st, 50);
  push(st, 60);
  push(st, 70);
  push(st, 80);
  push(st, 90);
  push(st, 100);
  push(st, 110);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  cout << peek(st) << endl;
  pop(st);
  return 0;
}
