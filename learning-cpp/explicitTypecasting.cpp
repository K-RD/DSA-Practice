// Program to typecaste from float data to float type and char data to int type & find its sum.

#include<iostream>

int main()
{
	std::cout<<std::endl<<"=========================================="<<std::endl;
	std::cout<<std::endl<<"Enter a decimal point value:: ";
 	// float val=10.32;
 	float val;
	std::cin>>val;

	std::cout<<std::endl<<"=========================================="<<std::endl;
	std::cout<<std::endl<<"Enter a character:: ";
 	// char a='s';
 	char a;
	std::cin>>a;

 	float res=val+float(a);

	std::cout<<std::endl<<"=========================================="<<std::endl<<std::endl;
 	std::cout<<"The total value of "<<val<<" and char "<<a<<" is "<<res<<std::endl;
	std::cout<<std::endl<<"=========================================="<<std::endl;

	return 0;
}
