#include<iostream>
#include<vector>
using namespace std;

void printVec(const vector<int> &nums, bool lineEnd=false){
  cout << endl;
  cout << "Vector ";
  for(int num : nums){
    cout << num << " ";
  }
  if(lineEnd)
    cout << endl;
}

class Solution
{
public:
    long long countSubarrays(vector<int>& nums, int k) {
      // Correct Solution --> Time Limit Exceeds 
      int maxElement = *max_element(nums.begin(), nums.end());

      vector<int> maxIndices;
      for (int i = 0; i < nums.size(); i++)
      {
        if(nums[i]==maxElement)maxIndices.push_back(i);
      }

      int count = 0;
      int maxElmCount = 0;
      int vecSize = nums.size();
      for(int i=0;i<vecSize; i++){
        maxElmCount = 0;
        for (int index : maxIndices)
        {
          if(index>=i){
            maxElmCount++;
          }
          if(maxElmCount >= k){
            count += (vecSize - index);
            break;
          }
        }
      }
      return count;
    }
};


int main()
{
  vector<int> nums1{1, 3, 2, 3, 3};
  int k1 = 2;
  Solution s;
  printVec(nums1);
  cout << ": " << s.countSubarrays(nums1, k1) << endl;

  vector<int> nums2{1, 4, 2, 1};
  int k2 = 3;
  printVec(nums2);
  cout << ": " << s.countSubarrays(nums2, k2) << endl;

  return 0;
}