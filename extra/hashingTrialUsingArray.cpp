// Implemented Hashing prototype which does following operation in O(1) time.
// Insert
// Search
// Delete

#include <cstdlib>
#include <iostream>
using namespace std;

class Hashing
{
public:
	void insert(int *arr, int val)
	{
		int sum = 0;
		int tempVal = val;
		while (val > 0)
		{
			int rem = val % 10;
			sum += rem;
			val = val / 10;
		}
		if (sum < 20)
		{
			arr[sum] = tempVal;
			cout << tempVal << " inserted" << endl;
		}
		else
		{
			cout << "Index out of range" << endl;
		}
	}
	bool search(int *arr, int val)
	{
		int sum = 0;
		int tempVal = val;
		while (val > 0)
		{
			int rem = val % 10;
			sum += rem;
			val = val / 10;
		}
		return (arr[sum] != 0);
	}
	void deleteIndex(int *arr, int val)
	{
		int sum = 0;
		int tempVal = val;
		while (val > 0)
		{
			int rem = val % 10;
			sum += rem;
			val = val / 10;
		}
		if (arr[sum] != 0)
		{
			arr[sum] = 0;
			cout << tempVal << " Deleted from index " << sum << endl;
		}
		else
		{
			cout << tempVal << " could not be found " << endl;
		}
	}
};

int main()
{
	Hashing h;
	int *arr = (int *)calloc(0, sizeof(int) * 20);

	h.insert(arr, 10);

	h.insert(arr, 20);

	h.insert(arr, 30);

	h.insert(arr, 40);

	h.insert(arr, 50);

	bool l1 = h.search(arr, 20);

	bool l2 = h.search(arr, 50);

	cout << "l1 : " << l1 << endl;
	cout << "l2 : " << l2 << endl;

	h.deleteIndex(arr, 30);

	bool l3 = h.search(arr, 30);

	cout << "l3 : " << l3 << endl;
	return 0;
}
