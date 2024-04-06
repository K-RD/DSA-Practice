#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int lastStoneWeight(vector<int>& stone)
        {
            // we take two haviest stone (x & y where x<=y) and smash them 
            // this forms a new stone of (y-x if y>x) weight.
            // if x==y then both  the stones are destroyed

            while(stone.size()>1)
            {
                sort(stone.begin(), stone.end());

                int maxElmIndex = stone.size()-1;
                int maxElm = stone[maxElmIndex];

                int maxElm2 = stone[maxElmIndex-1];

                stone.pop_back();
                stone.pop_back();
                int res = maxElm - maxElm2;
                if(res>0){
                    stone.push_back(res);
                }
            }
            return (stone.size()==1);
        }
};

int main()
{
    Solution s;
    
    vector<int> stones1 {2,7,4,1,8};
    vector<int> stones2 {21,71,4,81};
    vector<int> stones3 {2};

    cout<<(s.lastStoneWeight(stones1))<<endl;
    cout<<(s.lastStoneWeight(stones2))<<endl;
    cout<<(s.lastStoneWeight(stones3))<<endl;

    return 0;
}
