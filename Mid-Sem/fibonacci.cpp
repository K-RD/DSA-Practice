// Assignment: 2
// Q3. Write a C++ program that inputs a number from the user and displays Fibonacci series up to the number entered.

// Fibonacci Series: A series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
// The simplest is the series 1, 1, 2, 3, 5, 8, etc.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " are:" << endl;
    int a = 0, b = 1;
    while (a <= n){
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}