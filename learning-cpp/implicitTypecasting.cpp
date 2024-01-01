// Program to display the integer value of char.

#include <iostream>

int main()
{

	char a = 'A';
	for (int i = 0; i <= 100; i++, a++)
	{
		// a += i;
		int aValue = a;

		std::cout << "The value of " << a << " is " << aValue << std::endl;
	}

	return 0;
}
