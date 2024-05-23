#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node *previous;
};

int main()
{
  node *fourth = new node;
  fourth->data = 50;
  fourth->next = nullptr;

  node *third = new node;
  third->data = 40;
  third->next = fourth;
  fourth->previous = third;

  node *second = new node;
  second->data = 30;
  second->next = third;
  third->previous = second;

  node *first = new node;
  first->data = 20;
  first->next = second;
  second->previous = first;

  node *root = new node;
  root->data = 10;
  root->next = first;
  first->previous = root;
  root->previous = nullptr;

  cout << "LinkedList :\t";
  node* curr = root;
  while(curr != nullptr)
  {
    cout << curr->data << "\t";
    curr = curr->next;
  }
  cout << endl << endl;

  cout << "LinkedList in reverse order :\t";
  curr = fourth;
  while(curr != nullptr)
  {
    cout << curr->data << "\t";
    curr = curr->previous;
  }
  cout << endl << endl;
}
