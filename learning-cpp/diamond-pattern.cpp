// programm to print below pattern.

//      *
//    * * *
//  * * * * *
//    * * *
//      *

#include <iostream>

int main()
{
	int n = 7;

	std::cout << "Here is the diamond pattern" << std::endl;


	//Upper Portion

	for (int i = 0; i < (n/2); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < ((n / 2) - i))
			{
				std::cout << " ";
			}
			if (j >= ((n / 2) - (i)) && j <= ((n / 2) + i))
			{
				std::cout << "*";
			}
			if (j > ((n / 2) + i))
			{
				std::cout << " ";
			}
		}
			std::cout << std::endl;
	}

	// Lower Portion
	for (int i =(n/2);i>=0;i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < ((n / 2) - i))
			{
				std::cout << " ";
			}
			if (j >= ((n / 2) - (i)) && j <= ((n / 2) + i))
			{
				std::cout << "*";
			}
			if (j > ((n / 2) + i))
			{
				std::cout << " ";
			}
		}
			std::cout << std::endl;
	}


	return 0;
}
