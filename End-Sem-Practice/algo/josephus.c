#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a node of the circular linked list
typedef struct Node {
    char name;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(char name) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->name = name;
    newNode->next = NULL;
    return newNode;
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    if (head != NULL) {
        do {
            printf("%c -> ", temp->name);
            temp = temp->next;
        } while (temp != head);
        printf("(back to %c)\n", head->name);
    }
}

// Function to eliminate soldiers and display order
void josephus(Node* head, int n) {
    Node *current = head;
    Node *prev = NULL;
    
    while (current->next != current ) {
        // Move to the nth node
        for (int i = 1; i < n; i++) {
            prev = current;
            current = current->next;
        }
        // Print eliminated soldier
        printf("%c -> ", current->name);
        // Remove the current node
        prev->next = current->next;
        free(current);
        current = prev->next;
    }
    
    // Print the last remaining soldier
    printf("\nThe name of the remaining soldier is - ");
    printf("%c\n", current->name);
    free(current);
}

int main() {
    // Create circular linked list for soldiers A, B, C, D, E
    Node* head = createNode('A');
    Node* second = createNode('B');
    Node* third = createNode('C');
    Node* fourth = createNode('D');
    Node* fifth = createNode('E');
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head; // Circular link

    int n = 3; // Count number
    printf("Order of elimination:\n");
    josephus(head, n);
    
    return 0;
}

