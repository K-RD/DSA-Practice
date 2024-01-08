// Assignment: 2
// Q1. Write a C++ program that displays all possible combinations of 1, 2, and 3.

#include <iostream>
using namespace std;

int main(){
    cout << "All possible combinations of 1, 2, and 3 are:" << endl;
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            for (int k = 1; k <= 3; k++){
                cout << i << j << k << endl;
            }
        }
    }
    return 0;
}