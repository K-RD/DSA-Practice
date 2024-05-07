#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right ) {
        
        if(head->next == nullptr) return head;

        vector<int> v;

        int counter = 1;
        ListNode *curr = head;
        while(curr != nullptr)
        {
            if(counter >= left && counter <= right){
                v.push_back(curr->val);
            }
            counter++;
            curr = curr->next;
        }

        counter = 1;
        int len = v.size();
        curr = head;
        while(curr != nullptr)
        {
            if(counter >= left && counter <= right){
                curr->val = v[len - (counter-left) -1 ];
            }

            counter++;
            curr = curr->next;
        }

        return head;


    }
    void printll(ListNode *head){
        ListNode *curr = head;

        cout<<endl;
        while(curr != nullptr) {
            cout<<curr->val<<"\t";

            curr = curr->next;
        }
        cout<<endl;
    }
};

int main()
{
    ListNode *last = new ListNode(5);
    ListNode *sc = new ListNode(4,last);
    ListNode *tl = new ListNode(3,sc);
    ListNode *first = new ListNode(2,tl);
    ListNode *head = new ListNode(1,first);

    Solution s;

    s.printll(head);

    ListNode *newHead = s.reverseBetween(head, 2, 4);
    s.printll(newHead);

    return 0;
}
