#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
    public:
      ListNode* removeNodes(ListNode* head)
      {
          if(head->next == nullptr )return head;

          stack<int> st;
            
          struct ListNode *curr = head;
          while(curr != nullptr )
          {
              if(!st.empty() ){
                int topVal = st.top();
                if(topVal < curr->val){
                    st.pop();
                }else{
                    st.push(curr->val);
                    curr = curr->next;
                }
              }else{
                  st.push(curr->val);
                  curr = curr->next;
              }
          }

          struct ListNode *tempHead = nullptr;
          while(!st.empty() )
          {
              struct ListNode *tempNode = new ListNode(st.top(),tempHead);
              tempHead = tempNode;
              st.pop();
          }

          return tempHead;
      }
      void printLL(ListNode *head)
      {
          cout<<endl<<"Printing the linked List "<< endl;
          ListNode *curr = head;
          while(curr != nullptr )
          {
              cout<< curr->val <<"\t";
              curr = curr->next;
          }
          cout<<endl;
      }
};

int main()
{
    Solution s;

    struct ListNode *last = new ListNode(8);
    struct ListNode *sl = new ListNode(3, last);
    struct ListNode *tl = new ListNode(13, sl);
    struct ListNode *fl = new ListNode(2, tl);
    struct ListNode *head = new ListNode(5, fl);
    
    s.printLL(head);

    struct ListNode *newHead = s.removeNodes(head);

    s.printLL(newHead);

    return 0;

}
