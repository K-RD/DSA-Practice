#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0),next(nullptr){}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
    public:
        ListNode* mergeTwoList(ListNode* list1, ListNode* list2)
        {
            ListNode* merged = nullptr;
            ListNode* curr = nullptr;

            while(list1 != nullptr && list2 != nullptr)
            {
                ListNode* temp = nullptr;
                if(list1->val <= list2->val)
                {
                    if(merged == nullptr)
                    {
                        merged = new ListNode(list1->val);
                        merged->next = list1->next;
                        curr = merged;
                    }else{
                        temp = new ListNode(list1->val);
                        curr->next = temp;
                        curr = temp;
                    }
                    list1 = list1->next;
                }else{
                    if(merged == nullptr)
                    {
                        merged = new ListNode(list2->val);
                        merged->next = list2->next;

                        curr = merged;
                    }else{
                        temp = new ListNode(list2->val);
                        curr->next = temp;
                        curr = temp;
                    }
                    list2 = list2->next;
                }
            }
             if (list1 != nullptr)
                curr->next = list1;
            if (list2 != nullptr)
                curr->next = list2;

            return merged;
        }
        void printList(ListNode* merged)
        {
            ListNode* curr = merged;
            while(curr !=nullptr)
            {
                cout<<curr->val<<"\t";
                curr=curr->next;
            }
            cout<<endl;
        }
};

int main()
{
    Solution s;
    ListNode* fifth = new ListNode(50);
    ListNode* fourth = new ListNode(40,fifth);
    ListNode* third = new ListNode(30,fourth);
    ListNode* sec = new ListNode(20,third);
    ListNode* list1= new ListNode(10,sec);
    
    ListNode* n8 = new ListNode(85);
    ListNode* n7 = new ListNode(75,n8);
    ListNode* n6 = new ListNode(65,n7);
    ListNode* n5 = new ListNode(55,n6);
    ListNode* n4 = new ListNode(45,n5);
    ListNode* n3 = new ListNode(35,n4);
    ListNode* n2 = new ListNode(25,n3);
    ListNode* list2 = new ListNode(15,n2);
    
    ListNode *merged = s.mergeTwoList(list1, list2);

    s.printList(list1);
    s.printList(list2);
    s.printList(merged);

    return 0;
}
