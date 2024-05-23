#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

void printInstructions(node*);

void insertAtEnd(node *root,int val)
{
  node *curr = root;
  while(curr->next != nullptr)
  {
    curr = curr->next;
  }
  node *temp = new node;
  temp->data = val;
  temp->next = nullptr;
  curr->next = temp;

  printInstructions(root);
}

void printLinkedList(node *root)
{
  node *curr = root;
  while(curr != nullptr)
  {
    cout << curr->data << "\t";
    curr = curr->next;
  }
  printInstructions(root);
}

void printInstructions(node *root)
{
  int inst = 0;
  cout << endl;
  cout << "******************************" << endl;
  cout << "1. Insert node at the end." << endl;
  cout << "2. print linked list." << endl;
  cout << "3. others for terminating." << endl;
  cout << "******************************" << endl << endl;
  cout << "input : ";
  cin >> inst ;

  cout << endl << endl;

  if(inst == 1){
    int val = 0;
    cout << "Enter the value : " ;
    cin >> val;
    insertAtEnd(root, val);
    cout << endl << endl;
  }else if(inst == 2){
    printLinkedList(root);
    cout << endl << endl;
  }else{
    return;
  }

}

int main()
{
  node *fourth = new node;
  fourth->data = 50;
  fourth->next = nullptr;

  node *third = new node;
  third->data = 40;
  third->next = fourth;

  node *second = new node;
  second->data = 30;
  second->next = third;

  node *first = new node;
  first->data = 20;
  first->next = second;

  node *root = new node;
  root->data = 10;
  root->next = first;

  printInstructions(root);
  return 0;
}
