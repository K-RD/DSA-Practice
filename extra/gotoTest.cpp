#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	int solution[5];

	int i=0,j=0,len=5,product=1;
	
	bb:
		if(i!=j){product*=arr[j];}
		j++;
		if(j==len){solution[i]=product;product=1;j=0;i++;}

	if(i<=len-1){goto bb;}

	for(int k=0;k<=len-1;k++){cout<<solution[k]<<"\t";}
	cout<<endl;
	return 0;
}
