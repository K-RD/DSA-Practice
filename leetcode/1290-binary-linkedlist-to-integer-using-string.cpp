#include<iostream>
#include<vector>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string n="";
        int len=0;
        ListNode* curr=head;
        while(curr != nullptr)
        {
            // num = (num*10)+curr->val;
            n = n + to_string(curr->val);
            // v.push_back(curr->val);
            curr = curr->next;
            ++len;
        }
        cout<<"num: "<<n<<endl;

        int res=0;
        int bn = 1;
        for(int i=0; i<len; ++i)
        {
            // res += v[i]*pow(2,len-1-i);
            int temp=0;
            string z = "0";
            temp += (n[len-1-i]- z[0]);
            res += (temp * bn);
            bn = bn<<1;
            cout<< temp<<"\t";
        }
        cout<<endl;
        // double res = 0;
        // double i=0;
        // while(num>0){
        //     res += (num % 10)*(pow(2,i));
        //     num/=10;
        //     ++i;
        // }
        // cout<<"res: "<<res<<endl;

        // return ((int) res);
        return res;
    }
};

int main()
{
    Solution s;
    ListNode* last = new ListNode(0);
    ListNode* third = new ListNode(0, last);
    ListNode* fourth = new ListNode(0, third);
    ListNode* fifth = new ListNode(0, fourth);
    ListNode* sixth = new ListNode(0, fifth);
    ListNode* seventh = new ListNode(0, sixth);
    ListNode* eighth = new ListNode(1, seventh);
    ListNode* ninth = new ListNode(1, eighth);
    ListNode* tenth = new ListNode(1, ninth);
    ListNode* eleventh = new ListNode(0, tenth);
    ListNode* twelfth = new ListNode(0, eleventh);
    ListNode* thirteenth = new ListNode(1, twelfth);
    ListNode* fourteen = new ListNode(0, thirteenth);
    ListNode* fifteen = new ListNode(0, fourteen);
    ListNode* head = new ListNode(1, fifteen);

    int res = s.getDecimalValue(head);
    cout<<res<<endl;

    return 0;
}
