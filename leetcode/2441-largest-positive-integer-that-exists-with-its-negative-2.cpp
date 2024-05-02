#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findMaxK(vector<int> &nums){
      int maxK = -1;
      int len = nums.size();
      unordered_set<int> set;
      for(int val: nums){
        if(set.find(-val) != set.end()){
          maxK = max(maxK, abs(val));
        }else{
          set.insert(val);
        }
      }
      return (maxK != -1 ? maxK : -1);
    }
};

int main()
{
  Solution s;
  vector<int> nums1{-1,2,-3,3};
  cout<<"Vector 1 : "<<s.findMaxK(nums1)<<endl;

  vector<int> nums2{-1,10,6,7,-7,1};
  cout<<"Vector 2 : "<<s.findMaxK(nums2)<<endl;

  vector<int> nums3{-10,8,6,7,-2,-3};
  cout<<"Vector 3 : "<<s.findMaxK(nums3)<<endl;

  return 0;
}
