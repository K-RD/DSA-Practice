#include<iostream>
using namespace std;

int main(){
	vector<int> rollNo;

	for(int i=0;i<50;i++){
		rollNo.push_back(i);
	}

	cout<<"\nPrinting all the contents of the vector"<<endl;

	for(int j=0;j<rollNo.size();j++){
		cout<<rollNo[j]<<"\t";
	}
	return 0;
}
