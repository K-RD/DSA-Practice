// URL: https://leetcode.com/problems/rabbits-in-forest/description/?envType=daily-question&envId=2025-04-20

// 781. Rabbits in Forest

// There is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit.

// Given the array answers, return the minimum number of rabbits that could be in the forest.

//  
// Example 1:

// Input: answers = [1,1,2]
// Output: 5
// Explanation:
// The two rabbits that answered "1" could both be the same color, say red.
// The rabbit that answered "2" can't be red or the answers would be inconsistent.
// Say the rabbit that answered "2" was blue.
// Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
// The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.

// Example 2:

// Input: answers = [10,10,10]
// Output: 11

//  
// Constraints:

// 	1 <= answers.length <= 1000
// 	0 <= answers[i] < 1000

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
      unordered_map<int, int> freq;
      for(int x : answers)freq[x+1]++;

      int sum = 0;
      for(auto &p: freq){
        int tm = 1;
        if(p.second%p.first != 0){
          tm = (p.second/p.first) +1;
        }else tm = (p.second/p.first);

        int tsum = (p.first) * tm;
        sum += tsum;
      }

      return sum;
    }
};


int main(){
  vector<int> vec1={1, 1, 2};
  vector<int> vec2={10, 10, 10};
  vector<int> vec3={0, 0, 0};
  vector<int> vec4={2};
  vector<int> vec5={2, 2, 2, 2};
  vector<int> vec6={999};

  Solution s;
  cout << s.numRabbits(vec1) << endl;
  cout << s.numRabbits(vec2) << endl;
  cout << s.numRabbits(vec3) << endl;
  cout << s.numRabbits(vec4) << endl;
  cout << s.numRabbits(vec5) << endl;
  cout << s.numRabbits(vec6) << endl;

  return 0;
}