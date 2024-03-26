#include<iostream>
using namespace std;

class MyHash{
	public:
		int *arr;
		int m;
		MyHash(int length)
		{
			arr = new int[length];
			m = length;
			for(int i=0;i<m;++i)
			{
				arr[i] = -1;
			}

		}
		void insert(int key)
		{
			int index=0;
			int i=0;
			do{
				index = ((key % m) + (i*( ( m-1 ) - (key % (m-1))) )) % m;
				++i;
				if(i >= m)break;
			}
			while(arr[index] == -1 || arr[index] == -2);

			if(arr[index] == -1 || arr[index] == -2){
				arr[index] = key;
				cout<<key <<" inserted in the table."<< endl;
			}else{
				cout<<key <<" could not be inserted in the table."<< endl;
			}
		}
		int search(int key)
		{
			int index=0;
			int i=0;
			do{
				index = ((key % m) + (i*( ( m-1 ) - (key % (m-1))) )) % m;
				++i;
				if(i >= m || arr[index]==key)break;
			}
			while(arr[index] != -1 && arr[index] != key);

			if(arr[index] == key){
				cout<<key <<" found at index "<<index<< endl;
				return index;
			}else{
				cout<<key <<" could not be found."<< endl;
				return -1;
			}
		}
	};

int main(){
	MyHash mh(7);
	mh.insert(49);

	mh.insert(56);
	mh.insert(50);
	mh.insert(51);
	cout<<"56 : "<<mh.search(56)<<endl;
	cout<<"49 : "<<mh.search(49)<<endl;
	cout<<"79 : "<<mh.search(79)<<endl;
				
	return 0;
}

