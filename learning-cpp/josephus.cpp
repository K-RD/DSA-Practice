#include <iostream>

int jos(int n, int k)
{
	if (n == 1)
	{
		return 0;
	}
	return ((k+jos(n - 1, k))%n);
}

int main()
{
	// int n = 7;
	// int k = 3;
	int n, k;
	std::cin >> n >> k;
	int sur = jos(n, k);
	// std::cout << "Position " << sur << " will be the survivour." << std::endl;
	std::cout << sur;

	return 0;
}
