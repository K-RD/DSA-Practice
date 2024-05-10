// Printing the unique substring.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void substring(string s)
    {
      int len = s.size();
      for(int i = 0; i < len; ++i)
      {
        string temp = "";
        for(int j = i ; j < len ; ++j){
          temp.push_back(s[j]);
          cout << temp << "\t";
        }
        cout << endl;
      }
    }
};

int main()
{
  string s1 = "abcd";
  string s2 = "abcdef";

  Solution s;
  s.substring(s1);
  s.substring(s2);

  return 0;
}
