//  Program to check whether a character is vowel or consonent.
// Write a C++ program that inputs a character from the user and checks whether it is a vowel or consonent.

#include <iostream>
using namespace std;

int main()
{
    char l;
    cout << "Please enter a character to check whether it is vowel or consonents:: ";
    cin >> l;
    char letter = toupper(l);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        cout << "Entered character " << l << " is a Vowel." << endl;
    }
    else
    {
        cout << "Entered character " << l << " is a Consonent." << endl;
    }

    return 0;
}