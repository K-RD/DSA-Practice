#include <iostream>

int countSubSet(int arr[], int n, int sum)
{
	if (n == 0)
	{
		return ((sum == 0) ? 1 : 0);
	}
	return countSubSet(arr, n - 1, sum) + countSubSet(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
	int sizeArray;
	std::cin >> sizeArray;

	int arr[sizeArray];

	for (int i = 0; i < sizeArray; i++)
	{
		std::cin >> arr[i];
	}

	int sum;
	std::cin >> sum;

	int count = countSubSet(arr, sizeArray, sum);
	std::cout << count;

	return 0;
}
