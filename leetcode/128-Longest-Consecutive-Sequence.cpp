#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    if (nums.empty())return 0;
    set<int> freq(nums.begin(), nums.end());

    int longestSequence = 0;
    int currSeqLength = 0;

    int currValue = *freq.begin();

    for(int a: freq){
      if(a==currValue){
        currSeqLength++;
        currValue++;
      }
      else
      {
        longestSequence = max(longestSequence, currSeqLength);
        currValue = a + 1;
        currSeqLength = 1;
      }
    }
    longestSequence = max(longestSequence, currSeqLength);
    
    return longestSequence;
  }
};

void printVec(const vector<int> &nums){
  cout << "Vector: ";
  for(int num: nums){
    cout << num << " ";
  }
}

int main(){
  vector<int> nums1{100, 4, 200, 1, 3, 2};
  Solution s;

  printVec(nums1);
  cout << ": " << s.longestConsecutive(nums1) << endl;
  
  vector<int> nums2{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  printVec(nums2);
  cout << ": " << s.longestConsecutive(nums2) << endl;
  
  vector<int> nums3{1, 0, 1, 2};
  printVec(nums3);
  cout << ": " << s.longestConsecutive(nums3) << endl;


  return 0;
}