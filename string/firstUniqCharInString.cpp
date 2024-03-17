#include<iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr;
        arr.assign(26,0);

        int len=s.length();

        for(int i=0;i<len;i++){
            arr[s[i]-97]++;
        }

        for(int i=0;i<len;i++){
            if(arr[s[i]-97]==1){
                return i;
            }
        }

        return -1;
    }
};

int main(){
	Solution s;

	string s1="leetcode";
	string s2="loveleetcode";
	string s3="aabb";

	int res=s.firstUniqChar(s1);
	int res2=s.firstUniqChar(s2);
	int res3=s.firstUniqChar(s3);

	cout<<res<<" "<<res2<<" "<<res3<<endl;
	return 0;
}
