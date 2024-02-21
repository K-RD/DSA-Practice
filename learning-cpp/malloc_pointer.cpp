#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number of elements in array:: ";
    int n;
    cin >> n;

    // Using Malloc
    int *p = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of array:: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i); // p[i] --> both of them are same
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << " ";
    }
}
