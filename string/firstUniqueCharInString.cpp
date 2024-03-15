#include<iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++){
            int count=0;
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j] && i!=j){
                    count++;
                }
            }
            if(count==0){
                return i;
            }
        }
        return -1;
    }
};

int main(){

	Solution s;
	string first="leetcode";
	string second="loveleetcode";
	int res=s.firstUniqChar(first);
	string third="helo";
	string fourth="shamshersheram";
	int res2=s.firstUniqChar(second);

	int res3=s.firstUniqChar(third);

	int res4=s.firstUniqChar(fourth);
	cout<<res<<" "<<res2<<" "<<res3<<" "<<res4<<endl;
	return 0;
}
