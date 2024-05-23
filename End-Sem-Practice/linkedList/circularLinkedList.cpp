#include<iostream>
using namespace std;

struct node{
  int data;
  node* next;
  node* previous;
};

void printInstructions(node*);

void printReverseLinkedList(node *root)
{
  node *curr = root;
  curr = curr->previous;
  do{
    cout << curr->data << "\t";
    curr = curr->previous;

  }while(curr != root->previous);
  printInstructions(root);
}

void insertAtEnd(node *root, int val)
{
  node *curr = root;
  while(curr->next != root)
  {
    curr = curr->next;
  }
  node *temp = new node;
  temp->data = val;
  temp->next = root;
  temp->previous = curr;
  curr->next = temp;
  root->previous = temp;

  printInstructions(root);
}

void printLinkedList(node *root)
{
  node *curr = root;
  do{
    cout << curr->data << "\t";
    curr = curr->next;
  }while(curr->data != root->data);
  printInstructions(root);
}

void printInstructions(node* root)
{
  int inst = 0;
  cout << endl;
  cout << "******************************" << endl;
  cout << "1. Insert node at the end." << endl;
  cout << "2. print linked list." << endl;
  cout << "3. print reverse linked list." << endl;
  cout << "4. others for terminating." << endl;
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
  }else if(inst == 3 ){
    printReverseLinkedList(root);
    cout << endl << endl;
  }else{
    return;
  }
}

int main()
{
  node *second = new node;
  second->data = 30;

  node *first = new node;
  first->data = 20;

  node *root = new node;
  root->data = 10;
  root->next = first;
  root->previous = second;

  first->next = second;
  first->previous = root;
  second->next = root;
  second->previous = first;

  printInstructions(root);

  return 0;
}
