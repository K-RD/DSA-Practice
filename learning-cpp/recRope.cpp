#include<iostream>

int ropePieces(int n,int a,int b,int c)
{
    if(n==0)return 0;
    if (n<0) return -1;

    //considering a as primary cut
    int res=std::max((std::max(ropePieces(n-a,a,b,c),ropePieces(n-b,a,b,c))),ropePieces(n-c,a,b,c));

    if(res==-1)return -1;
    return res+1;
}

int main()
{
    int n=23;
    int a=11,b=9,c=12;
    // int n=9;
    // int a=2,b=2,c=2;
    int aa=ropePieces(n,a,b,c);
    std::cout<<"Maximum number of parts will be :: "<<aa;

    return 0;
}