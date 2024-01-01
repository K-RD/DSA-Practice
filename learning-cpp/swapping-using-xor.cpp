//Program to swap two numbers.
#include<iostream>

int main()
{
	int a =10;
	int b=20;

	std::cout<<a<<"  "<<b<<std::endl;

	a=a^b;
	b=a^b;
	a=a^b;

	std::cout<<a<<"  "<<b<<std::endl;

	return 0;
}
