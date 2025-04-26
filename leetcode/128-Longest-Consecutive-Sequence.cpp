#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

class Solution
{
public:
  int longestConsecutive2(vector<int> &nums)
  {
    if (nums.empty())
      return 0;
    set<int> freq(nums.begin(), nums.end()); // time : O(n log n )

    int longestSequence = 0;
    int currSeqLength = 0;

    int currValue = *freq.begin();

    for (int a : freq)
    { // time : O(n)
      if (a == currValue)
      {
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

  int longestConsecutive(vector<int> &nums)
  {
    unordered_set<int> freq(nums.begin(), nums.end());

    int longestSequence = 0;
    int currSeqLength = 0;

    for (int num : freq)
    {
      if (!freq.count(num-1))
      {
        int currValue = num;
        currSeqLength = 1;

        while(freq.count(currValue + 1)){
          currValue++;
          currSeqLength++;
        }
      }
      longestSequence = max(longestSequence, currSeqLength);
    }
    return longestSequence;
  }
};

void printVec(const vector<int> &nums)
{
  cout << "Vector: ";
  for (int num : nums)
  {
    cout << num << " ";
  }
}

int main()
{
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