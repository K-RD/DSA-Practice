#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int maxScore(vector<int>& cardPoints, int k) 
  {
    int l = 0 , r = 0, maxPoint = 0;
    int leftPoint = 0, rightPoint = 0;
    int len = cardPoints.size();
    for(int i = 0; i < k; ++i)
    {
      leftPoint += cardPoints[i];
      rightPoint += cardPoints[len-i-1];
    }

    maxPoint = (leftPoint < rightPoint ? rightPoint : leftPoint);
    return maxPoint;

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
