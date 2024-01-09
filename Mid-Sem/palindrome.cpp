// Assignment: 2
// Q5. Write a C++ program that displays all prime numbers between 100 and 500 that are also palindrome.

// Palindrome: A number is called palindrome if it is equal to its reverse.
// For example, 121 is a palindrome because the reverse of 121 is 121.

#include <iostream>
using namespace std;

int isPrime(int n)
{
    for (int k = 2; k < n; k++)
    {
        if (n % k == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << "Printing numbers between 100 and 500 that are prime and palindrome." << endl;

    for (int i = 100; i < 500; i++)
    {
        int rev = 0;
        int k = i;
        while (k > 0)
        {
            int digit = k % 10;
            rev = rev * 10 + digit;
            k /= 10;
        }
        if (i == rev)
        {
            if (isPrime(i) == 1)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}