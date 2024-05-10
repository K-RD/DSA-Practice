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
        vector<int> tracker(26, 0);
        string temp = "";
        for(int j = i ; j < len ; ++j){
            if(tracker[s[j]-97] == 0){
                temp.push_back(s[j]);
                cout << temp << "\t";
                tracker[s[j]-97] = 1;
            }else{
                cout << temp << endl;
                break;
            }
        }
        cout << endl;
      }
    }
};

int main()
{
  string s1 = "abcaceh";
  string s2 = "ghjhykl";

  Solution s;
  s.substring(s1);
  s.substring(s2);

  return 0;
}
