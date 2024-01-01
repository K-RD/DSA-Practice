//Program to check whether given number is smith number or not.

#include<iostream>

int smithNo(int n)
{
    if (n<=1)return 0;
    int temp=n;
    int sumPrimeFactors=0;
    for(int i=2;(i*i)<=temp;i++)
    {
        while(temp%i==0)
        {
                // std::cout<<"greater than 10: "<<i<<std::endl;
            if (i>=10)
            {
                int ii=i;
                while(ii>0)
                {
                    sumPrimeFactors+=(ii%10);
                    ii/=10;
                }
            }else{
            sumPrimeFactors+=(i);
            }
            temp/=i;
        }
    }
    if (sumPrimeFactors==0)
    {
        return 0;
    }
    if (temp>1)
    {
        while(temp>0)
        {
            sumPrimeFactors+=(temp%10);
            temp/=10;
        }
    }
    // if(temp>1)
    // {
    //     sumPrimeFactors+=temp;
    // }
    
    int sumDigit=0;
    while(n>0)
    {
        sumDigit+=(n%10);
        n/=10;
    }
    // std::cout<<sumPrimeFactors<<"  "<<sumDigit<<std::endl;
    return (sumDigit==sumPrimeFactors);
    
}

int main()
{
    int n;
    std::cin>>n;
    int res=smithNo(n);
    std::cout<<res;
    return 0;   
}