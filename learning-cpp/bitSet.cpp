// Program to check if Kth bit is set or not.
//Set mean binary bit at kth place is 1.

// TestCase
// 5 1
// yes

// 8 2
// no

// 0 3
// no


#include <iostream>

int main()
{
    int n,k;
    std::cin>>n>>k;

    int kBin=pow(2,k-1);
    int resSet=kBin&n;

    std::cout<<((resSet==kBin)?"yes":"no");

    return 0;
}