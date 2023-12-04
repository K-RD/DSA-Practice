#include<iostream>

void towerOfHanoi(int n,char A,char B,char C){
    if (n==1)
    {
        std::cout<<"Moves 1 from "<<A<<" to "<<C<<std::endl;
        return;
    }
    towerOfHanoi(n-1,A,C,B);
    std::cout<<"Moves "<<n<<" from "<<A<<" to "<<C<<std::endl;
    towerOfHanoi(n-1,B,A,C);
}
int main()
{
    int n=3;

    towerOfHanoi(n,'A','B','C');

    return 0;
}