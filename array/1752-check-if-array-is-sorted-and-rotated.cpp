#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	bool check(vector<int> &nums){
		if(nums.size()==1)return true;

		int point = 0;
		for(int i=0;i<nums.size()-1;++i){
			if(nums[i] > nums[i+1]){
				point = i+1;
				break;
			}
		}

		for(int i = point;i<(nums.size()+point-1);++i){
			cout<<nums[i%nums.size()]<<" ";
			if(nums[i%nums.size()] > nums[((i+1)%nums.size())]){
				return false;
			}
		}
		cout<<endl;

		return true;
	}
};

int main()
{
	vector<int> v1 {3,4,5,1,2};
	vector<int> v2 {2,1,3,4};
	vector<int> v3 {1,2,3};
	Solution s;

	bool res1 = s.check(v1);
	bool res2 = s.check(v2);
	bool res3 = s.check(v3);

	cout<<res1<<"\t"<<res2<<"\t"<<res3<<endl;

	return 0;
}
