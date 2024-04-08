#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
        string convertToTitle(int columnNumber)
        {
            string res;
            while(columnNumber>0)
            {
                int rem = (columnNumber-1)%26;
                char remChar = 'A'+rem;
                res = remChar+res;
                columnNumber = (columnNumber -1)/26;
            }
            return res;
        }
};

int main()
{
    int colNo1=1;
    int colNo2=28;
    int colNo3=701;

    Solution s;

    cout<<"converting columnNober to title"<<endl;
    cout<<colNo1<<" : "<<s.convertToTitle(colNo1)<<endl;
    cout<<colNo2<<" : "<<s.convertToTitle(colNo2)<<endl;
    cout<<colNo3<<" : "<<s.convertToTitle(colNo3)<<endl;
    

    return 0;
}
