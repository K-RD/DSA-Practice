// Approach 2: Expand Around Center : O(n2)
//  Identify all initial palindromes of size 2 (even) and size 3 (odd) in the string.
// For each found palindrome, store a pair<start_index, length> in a vector<pair<int, int>>
// For each pair, try to expand outwards:
// start--, end++
// As long as s[start] == s[end], update the size.
// After expanding all, find the maximum-length palindrome using a simple linear scan.
// Return the substring from the stored start_index and length.


// Corner Cases:
// Input: s="ac"	output: “a”
// Input: s="a"		output: “a”
// Input: s="pencil"	output: “p”


#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;

bool isPalindrome(string s){
  int len = s.size();
  int f = 0;
  int l = len-1;
  while(f<l){
    if(s[f] != s[l])return false;
    f++;l--;
  }
  return true;
}

string longestPalindrome(string s) {
  int length = s.size();
  int eventPalindromeSize = 2;
  int oddPalindromeSize = 3;

  vector<pair<int,int> > vecPalindrome;
  for(int k=2;k<=3;k++){
    for(int i=0;i<=(length-k);i++){
      string temp = s.substr(i,k);
      cout << temp << "  ";
      if(isPalindrome(temp)){
        vecPalindrome.push_back(make_pair(i,k));
      }
    }
  }

  pair<int,int> maxSize = {0,0};
  for(int i = 0; i< vecPalindrome.size();i++){
    cout << vecPalindrome[i].first << ": " << vecPalindrome[i].second << "\t";
    int f = vecPalindrome[i].first;
    int r = vecPalindrome[i].first + vecPalindrome[i].second -1;
    while(f > 0 && r < length - 1 && s[f - 1] == s[r + 1]){
      f--;r++;
    }
    vecPalindrome[i].first = f;
    vecPalindrome[i].second = r - f + 1;
    if(vecPalindrome[i].second > maxSize.second){
      maxSize.first = f;
      maxSize.second = vecPalindrome[i].second;
    }

  }

  cout << "Max Pair : " << maxSize.first << " " << maxSize.second << "\t";
  string maxPal = s.substr(maxSize.first,maxSize.second);
  cout << maxPal << endl;
  return maxPal;
}

int main(){
  string all[]={"hello","how","babad","cbbd","satyamaytas"};
  int length = sizeof(all) / sizeof(all[0]);
  for(int i = 0; i< length ; i++){
    string res = longestPalindrome(all[i]);
    // cout << all[i] << ": " << res << endl;
    cout << endl;
  }
  return 0;
}