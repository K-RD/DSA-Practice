// Write a C++ program that inputs a week days and display the name of the day.
// For example if user enters 1, it displays “Sunday” and so on.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a week day no (1 - 7) to see its day:: ";
    cin >> n;
    if (n < 1 || n > 7)
    {
        cout << "Please enter a day number between 1 and 7." << endl;
    }

    switch (n)
    {
    case 1:
        cout << "Day " << n << " of the week is Sunday" << endl;
        break;
    case 2:
        cout << "Day " << n << " of the week is Monday" << endl;
        break;
    case 3:
        cout << "Day " << n << " of the week is Tuesday" << endl;
        break;
    case 4:
        cout << "Day " << n << " of the week is Wednesday" << endl;
        break;
    case 5:
        cout << "Day " << n << " of the week is Thursday" << endl;
        break;
    case 6:
        cout << "Day " << n << " of the week is Friday" << endl;
        break;
    case 7:
        cout << "Day " << n << " of the week is Saturday" << endl;
        break;
    default:
        break;
    }

    return 0;
}
