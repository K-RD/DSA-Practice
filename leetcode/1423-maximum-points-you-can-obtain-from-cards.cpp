#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int maxScore(vector<int>& cardPoints, int k) 
  {
    //int l = 0 , r = 0, maxPoint = 0;
    //int leftPoint = 0, rightPoint = 0;
    //int len = cardPoints.size();
    //for(int i = 0; i < k; ++i)
    //{
    //  leftPoint += cardPoints[i];
    // rightPoint += cardPoints[len-i-1];
    //}
    //maxPoint = (leftPoint < rightPoint ? rightPoint : leftPoint);
    //return maxPoint;

    int len = cardPoints.size();
    int left = len-k;
    int right = len-1;

    int sum = 0;
    int maxSum = 0;
    for(int i = left ; i <= right ; ++i)
    {
        sum += cardPoints[i];
    }
    maxSum = sum;
    if(k==len)return maxSum;

    while(right % len != k-1 )
    {
        sum -= cardPoints[left];
        ++left;
        ++right;
        sum += cardPoints[right%len];

        maxSum = (sum > maxSum ? sum : maxSum);
    }

    return maxSum;
  }
};

int main()
{
  Solution s;

  vector<int> v1 {1,2,3,4,5,6,1};
  int k1 = 3;
  cout << "Example 1 : " << s.maxScore(v1, k1) << endl ;

  vector<int> v2 {2, 2, 2};
  int k2 = 2;
  cout << "Example 2 : " << s.maxScore(v2, k2) << endl ;

  vector<int> v3 {9,7,7,9,7,7,9};
  int k3 = 7;
  cout << "Example 3 : " << s.maxScore(v3, k3) << endl ;

  return 0;
}
