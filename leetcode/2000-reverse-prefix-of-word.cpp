#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string prefix = "";
        int len = word.size();
        int chFirstIndex = -1;
        int found = 1;
        for(int i = 0;i<len;++i){
          if(word[i] != ch){
            prefix +=word[i];
          }else if(word[i]==ch){
            prefix += word[i];
            chFirstIndex = i;
            found = 0;
            break;
          }
        }
        if(found)return word;

        string revPrefix = "";
        for(int i = 0; i<prefix.size();++i){
          revPrefix = prefix[i]+revPrefix;
        }

        string suffix = "";
        if(len>chFirstIndex && chFirstIndex!= -1){
          for(int i = chFirstIndex+1 ; i<len;++i){
            suffix += word[i];
          }
        }
        string result = revPrefix + suffix;

        return result;
    }
};

int main()
{
  Solution s;
  string word1 = "abcdefd";
  char ch1 = 'd';
  cout<<word1<<"\t"<<s.reversePrefix(word1,ch1)<<endl;

  string word2 = "xyxzxe";
  char ch2 = 'z';
  cout<<word2<<"\t"<<s.reversePrefix(word2,ch2)<<endl;

  string word3 = "abcd";
  char ch3 = 'z';
  cout<<word3<<"\t"<<s.reversePrefix(word3,ch3)<<endl;

  string word4 = "hello singh";
  char ch4 = ' ';
  cout<<word4<<"\t"<<s.reversePrefix(word4,ch4)<<endl;

  string word5 = "singh";
  char ch5 = 'h';
  cout<<word5<<"\t"<<s.reversePrefix(word5,ch5)<<endl;

  return 0;
}
