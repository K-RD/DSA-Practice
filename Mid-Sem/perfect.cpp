// Assignment: 2
// Q4. Write a C++ program that inputs a number from the user and displays all perfect number up to the number entered.

// Perfect Number: A number is called perfect if the sum of its proper divisors is equal to the number.
// For example, 6 is a perfect number because 6 = 1 + 2 + 3.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:: ";
    cin >> n;

    cout << "All perfect numbers up to " << n << " are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j <  i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}