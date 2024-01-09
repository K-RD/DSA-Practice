// Assignment: 2
// Q2. Write a C++ program that inputs a number from the user and displays all Armstrong number up to the number entered.

// Armstrong Number: A number is called Armstrong number if it is equal to the sum of the cubes of its digits. 
// For example, 153 is an Armstrong number because 153 = 1^3 + 5^3 + 3^3.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "All Armstrong numbers up to " << n << " are:" << endl;
    for (int i = 1; i <= n; i++){
        int temp = i, sum = 0;
        while (temp > 0){
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i){
            cout << i << endl;
        }
    }
    return 0;
}