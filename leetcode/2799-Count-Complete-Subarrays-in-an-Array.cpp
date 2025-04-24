#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  int countCompleteSubarrays(const vector<int> &nums)
  {
    unordered_set<int> distinct(nums.begin(), nums.end());
    int distinctElements = distinct.size();

    unordered_map<int, int> freq;
    int right = 0, count = 0;
    int n = nums.size();

    for (int left = 0; left < n; left++)
    {
      if (left > 0)
      {
        freq[nums[left - 1]]--;
        if (freq[nums[left - 1]] == 0)
          freq.erase(nums[left - 1]);
      }

      while (right < n && freq.size() < distinctElements)
      {
        freq[nums[right]]++;
        right++;
      }

      if (freq.size() == distinctElements)
        count += (n - right + 1);
    }

    return count;
  }
};

void printVec(vector<int> nums)
{
  cout << "Vector: ";
  for (int num : nums)
  {
    cout << num << " ";
  }
}

int main()
{
  vector<int> vec1{1, 3, 1, 2, 2};
  vector<int> vec2{5, 5, 5, 5};

  Solution s;
  printVec(vec1);
  cout << " : " << s.countCompleteSubarrays(vec1) << endl;

  printVec(vec2);
  cout << " : " << s.countCompleteSubarrays(vec2) << endl;

  return 0;
}