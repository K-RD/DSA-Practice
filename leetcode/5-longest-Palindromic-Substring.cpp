// URL: https://leetcode.com/problems/longest-palindromic-substring/description/?envType=problem-list-v2&envId=string

// 5. Longest Palindromic Substring

// Given a string s, return the longest palindromic substring in s.

//  
// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

// Example 2:

// Input: s = "cbbd"
// Output: "bb"

//  
// Constraints:

// 	1 <= s.length <= 1000
// 	s consist of only digits and English letters.


// Approach:
// 1. Check if the string is empty or has a length of 1. If so, return the string itself.
// 2. Initialize a variable `longest` to keep track of the longest palindromic substring found so far.
// 3. Iterate through each character in the string as a potential center of a palindrome.
// 4. For each character, check for both odd-length and even-length palindromes by expanding outwards.
// 5. Update the `longest` variable if a longer palindrome is found.
// 6. Return the longest palindromic substring found.


// Corner Cases:
// Input: s="ac"	output: “a”
// Input: s="a"		output: “a”
// Input: s="pencil"	output: “p”

#include <iostream>
#include <string>
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

  for(int i=length;i>0;i--){
    for(int j = 0; j <= length-i; j++){
      string temp = s.substr(j,i);
      cout << temp << "  ";
      if(isPalindrome(temp))return temp;
    }
  }
  return "";
}

int main(){
  string all[]={"hello","how","babad","cbbd","satyamaytas"};
  int length = sizeof(all) / sizeof(all[0]);
  for(int i = 0; i< length ; i++){
    string res = longestPalindrome(all[i]);
    cout << all[i] << ": " << res << endl;
  }
  return 0;
}