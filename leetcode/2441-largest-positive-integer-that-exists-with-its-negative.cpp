#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findMaxK(vector<int> &nums){
      // Using nested for loop to find max no with its negative value..
      int max = -1;
      int len = nums.size();
      for(int i=0;i<len;++i){
        for(int j=0;j<len;++j){
          if(i != j && nums[i]==-nums[j]){
            int positive = (nums[i]<0?-nums[i]:nums[i]);
            if(positive > max)max = positive;
          }
        }
      }

      return max;
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

