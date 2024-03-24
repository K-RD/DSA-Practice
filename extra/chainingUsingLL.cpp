// Program to demonstrates the basic operations of a hash table
// with separate chaining collision resolution, including insertion, deletion and searching.

#include <cstdlib>
#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *createNode(int val)
{
	struct node *temp = new node;
	temp->data = val;
	temp->next = NULL;

	return temp;
}

struct table
{
	struct node **arr; // Array of node pointers.
	int size;
};

struct table *createTable(int length)
{
	struct table *temp = new table;

	temp->size = length;
	temp->arr = new node *[length]; // Allocate memory for array of node pointers.

	for (int i = 0; i < length; ++i)
		temp->arr[i] = NULL; // Initialize each element to null;

	return temp;
}

void insert(struct table *t, int val)
{
	int index = val % t->size;

	struct node *curr = t->arr[index];

	if (!curr)
	{
		t->arr[index] = createNode(val);
		cout << "Inserted " << val << " in the hash table." << endl;
		return;
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = createNode(val);
	cout << "Inserted " << val << " in the hash table." << endl;
}

bool search(struct table *t, int val)
{
	int index = val % t->size;

	struct node *curr = t->arr[index];

	while (curr != NULL)
	{
		if (curr->data == val)
			return true;

		curr = curr->next;
	}
	return false;
}

bool deleteKey(struct table *t, int val)
{
	int index = val % t->size;

	struct node *curr = t->arr[index];
	struct node *prev = NULL;

	// Check if the list is empty at the given index
	if (curr == nullptr)
	{
		// cout << val << " not found in the hash table." << endl;
		return false;
	}

	while (curr != NULL)
	{
		if (curr->data == val)
		{
			if (prev == NULL)
			{
				t->arr[index] = curr->next; // If the node to be deleted is the head of the list.
			}
			else
			{
				prev->next = curr->next; // If the node to be deleted is not the head .
			}
			delete curr;
			// cout << "Deleted " << val << " from the hash table." << endl;
			return true;
		}
		prev = curr;
		curr = curr->next;
	}
	// cout << val << " not found in the hash table." << endl;
	return false;
}

int main()
{
	struct table *t = createTable(7);

	insert(t, 70);

	insert(t, 71);

	insert(t, 9);

	insert(t, 56);

	insert(t, 72);

	cout << "search 71 : " << search(t, 71) << endl;
	cout << "search 9 : " << search(t, 9) << endl;
	cout << "search 94 : " << search(t, 94) << endl;
	cout << "search 72 : " << search(t, 72) << endl;
	cout << "search 56 : " << search(t, 56) << endl;
	cout << "search 57 : " << search(t, 57) << endl;

	// Deleting some keys
	cout << "Deleting key 9: " << deleteKey(t, 9) << endl;
	cout << "Deleting key 72: " << deleteKey(t, 72) << endl;
	cout << "Deleting key 100: " << deleteKey(t, 100) << endl;

	// Searching again after deletion
	cout << "search 9 : " << search(t, 9) << endl;
	cout << "search 72 : " << search(t, 72) << endl;
	cout << "search 56 : " << search(t, 56) << endl;

	return 0;
}
