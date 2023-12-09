//Program to print size of data types.

#include<iostream>

int main()
{
	int a=10;
	std::cout<<"Size of int "<<a<<" is "<<sizeof(a)<<std::endl;
	
	float b=10.10;
	std::cout<<"size of float "<<b<<" is "<< sizeof(b)<<std::endl;	

	char c='c';
	std::cout<<"size of char "<<c<<" is "<< sizeof(c)<<std::endl;	

	double d=1033.105;
	std::cout<<"size of double "<<d<<" is "<< sizeof(d)<<std::endl;	

	long l=1010;
	std::cout<<"size of long "<<l<<" is "<< sizeof(l)<<std::endl;	

	std::string s="Good Morning Everyone, I am Robind Kumar.";
	std::cout<<"size of string '"<<s<<"' is "<< sizeof(s)<<std::endl;	

	std::string sRandom="Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.Good Morning Everyone, I am Robind Kumar.";
	std::cout<<"size of string '"<<"sRandom"<<"' is "<< sizeof(sRandom)<<std::endl;	


	return 0;
}
