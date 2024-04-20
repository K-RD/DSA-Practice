#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Your implementation of removeNthFromEnd function here
        ListNode *current = head;
        ListNode *slow = head;
        ListNode *fast = head;

        if (slow == nullptr || slow->next == nullptr )
        {
            return nullptr;
        }
        cout<< " slow : "<< slow->val <<endl;
        int s = n;
        while(s--){
            fast = fast->next;
        }
        cout<< " fast : "<< fast->val <<endl;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        cout<< " fast : "<< fast->val <<endl;
        cout<< " slow : "<< slow->val <<endl;

        ListNode *temp = slow;
        slow->next = slow->next->next;
        // free(temp);

        cout<< " head : "<< head->val <<endl;

        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating the linked list [1, 2, 3, ..., 25]
    ListNode* head = new ListNode(1);
    ListNode* current = head;
    for (int i = 2; i <= 25; ++i) {
        current->next = new ListNode(i);
        current = current->next;
    }

    // Printing the original linked list
    std::cout << "Original Linked List: ";
    printList(head);

    // Calling the removeNthFromEnd function
    Solution solution;
    int n = 2; // Example value, you can change as needed
    ListNode* newHead = solution.removeNthFromEnd(head, n);

    // Printing the modified linked list
    std::cout << "Modified Linked List: ";
    printList(newHead);

    // Clean up memory
    while (newHead != nullptr) {
        ListNode* temp = newHead;
        newHead = newHead->next;
        delete temp;
    }

    return 0;
}

