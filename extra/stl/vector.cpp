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

	// Creating a vector inside vector to store 2D Data.
	vector < vector < int > > length;

	for(int p=0;p<5;p++){
		vector< int> temp;

		for(int q=0;q<p*4;q++){
			temp.push_back(p*q+3);
		}
		length.push_back(temp);
	}

	cout<< "printing the length vector"<<endl;

	for(int d=0;d<length.size();d++){
		cout<<"Size: "<<length[d].size()<<endl;
		for(int e=0;e<length[d].size();e++){
			cout<<length[d][e]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}
