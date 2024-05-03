#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int compareVersion(string version1, string version2)
    {

      return 1;
    }
};

int main()
{
  Solution s;
  string v11 = "1.01";
  string v12 = "1.001";
  cout<<"string 1 : "<<s.compareVersion(v11, v12)<<endl;

  string v21 = "1.0";
  string v22 = "1.0.0";
  cout<<"string 2 : "<<s.compareVersion(v21, v22)<<endl;

  string v31 = "0.1";
  string v32 = "1.1";
  cout<<"string 3 : "<<s.compareVersion(v31, v32)<<endl;

  return 0;
}


