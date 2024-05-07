/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        vector<int> sol;
        ListNode *curr = head;
        while(curr != nullptr){
            sol.push_back(curr->val);
            curr = curr->next;
        }
        int carry = 0;
        for(int i = sol.size()-1;i >= 0;--i){
            int doubleVal = sol[i]+sol[i]+carry;
            carry = doubleVal/10;
            sol[i] = doubleVal%10;
        }
        int i = 0;
        ListNode *tempHead = head;
        while(tempHead != nullptr){
            tempHead->val = sol[i++];
            tempHead = tempHead->next;
        }
        if(carry){
            ListNode *newHead = new ListNode(carry, head);
            return newHead;
        }
        return head;
    }
};
