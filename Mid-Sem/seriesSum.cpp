// Assignment: 2
// Q7. Write a C++ program that inputs the value of x and range.
// It then calculates and print the sum of the following series 1+1/x+1/x^2+1/x^3+1/x^4+......

#include <iostream>
using namespace std;

int main()
{
    int x, range;
    cout << "series 1+1/x+1/x^2+1/x^3+1/x^4+......" << endl;
    cout << "Please enter the value of X and range in above series:: ";
    cin >> x >> range;
    double sum = 1.0;
    for (int j = 1; j <=range; j++)
    {
        double val = 1.0;
        for (int k = 1; k <= j; k++)
        {
            val *= x;
        }
        sum += 1.0 / val;
    }
    cout << sum;

    return 0;
}