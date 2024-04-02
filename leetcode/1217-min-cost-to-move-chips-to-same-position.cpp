#include<iostream>
using namespace std;

class Solution
{
public:
    int minCostToMoveChips(vector<int>& position)
    {
        int zero = 0;
        int one = 0;
        for(int i=0;i<position.size();++i)
        {
            if(position[i]%2 == 0)
            {
                zero++;
            }else{
                one++;
            }
        }
        return ((zero<=one)?zero:one);
    }
};

void printVector(vector<int> v)
{
    for(auto e : v)
    {
        cout<<e<<"\t";
    }
    cout<<endl;
}

int main()
{
    vector<int> v1{1,2,3};
    vector<int> v2{2,2,2,3,3};
    vector<int> v3{1, 1000000000};
    
    Solution s;

    cout<<"Printing all the examples :"<<endl;
    cout<<endl<<"Example 1:"<<endl;
    printVector(v1);
    cout<<s.minCostToMoveChips(v1)<<endl;

    cout<<endl<<"Example 2:"<<endl;
    printVector(v2);
    cout<<s.minCostToMoveChips(v2)<<endl;
    
    cout<<endl<<"Example 3:"<<endl;
    printVector(v3);
    cout<<s.minCostToMoveChips(v3)<<endl;
    
    return 0;
}
