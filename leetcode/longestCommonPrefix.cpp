#include<iostream>
using namespace std;

class Solution {
public:
    string lcp(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs.back();
        int i=0;
        while(first[i]==last[i] && i<first.length() && i<last.length()){
            i++;
        }
        return first.substr(0,i);
    }
};

int main(){
	Solution s;

	vector<string> s1,s2,s3,s4;
	
	s1.push_back("dog");
	s1.push_back("racecar");
	s1.push_back("car");

	s2.push_back("flower");s2.push_back("flow");s2.push_back("flight");

	s3.push_back("satyam");
	s3.push_back("satya");
	s3.push_back("satendra");

	s4.push_back("aniket");
	s4.push_back("aniraj");
	s4.push_back("anuradha");

	cout <<s.lcp(s1)<<endl<<s.lcp(s2)<<endl<<s.lcp(s3)<<endl<<s.lcp(s4)<<endl;

	return 0;
}
