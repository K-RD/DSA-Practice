#include <iostream>
using namespace std;

int countSeq(vector<int> vec, int lower, int upper)
{
  long long prefixSum = 0;
  long long minPrefix = 0;
  long long maxPrefix = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    prefixSum += vec[i];
    minPrefix = min(minPrefix, prefixSum);
    maxPrefix = max(maxPrefix, prefixSum);
  }~

  long long minStart = lower - minPrefix;
  long long maxStart = upper - maxPrefix;

  if (minStart > maxStart)return 0;
  return maxStart - minStart + 1;
}

int main()
{
  vector<int> vec1{1, -3, 4};
  int lower1 = 1, upper1 = 6;
  cout << countSeq(vec1, lower1, upper1) << endl;
  
  vector<int> vec2{3, -4, 5, 1, -2};
  int lower2 = -4, upper2 = 5;
  cout << countSeq(vec2, lower2, upper2) << endl;

  vector<int> vec3{4, -7, 2};
  int lower3 = 3, upper3 = 6;
  cout << countSeq(vec3, lower3, upper3) << endl;
  return 0;
}