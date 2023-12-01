#include<iostream>

void func(int n)
{
    if(n==0)
    {
        return;
    }
    func(n/2);
    std::cout<<n%2;
}
int main()
{
    int n=25;
    std::cout<<"Binary of "<<n<<" is ";
    func(n);

    return 0;
}