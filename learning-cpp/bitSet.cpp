// Program to check if Kth bit is set or not.
//Set mean binary bit at kth place is 1.
#include <iostream>

int main()
{
    int n=9,k=4;

    int kBin=pow(2,k-1);
    // std::cout<<(kBin&n)<<std::endl;

    int resSet=kBin&n;

    std::cout<<((resSet==kBin)?"Yes":"No");

    return 0;
}