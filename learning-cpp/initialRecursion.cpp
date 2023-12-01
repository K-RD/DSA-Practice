#include<iostream>

void func1()
{
    std::cout<<"Func 1"<<std::endl;
}
void func2()
{
    std::cout<<"before func 1"<<std::endl;
    func1();
    std::cout<<"After func 1"<<std::endl;
}
int main()
{
    std::cout<<"Before func 2"<<std::endl;
    func2();
    std::cout<<"After func 2"<<std::endl;
    return 0;
}