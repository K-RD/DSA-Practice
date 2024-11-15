// Program to find the time taken to run a particular program in  c programming language.

#include<stdio.h>
#include<time.h>

long long sum1(int n)
{
    long long res;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            res++;
        }
    }
    return res;
}

long long sum2(int n)
{
    long long res;
    for(int i=0; i<=n; i++)
    {
        res+=i;
    }
    return res;
}

long long sum3(int n)
{
    long long res;
    res = (n*(n+1))/2;
    return res;
}

int main ()
{
    unsigned  long t = clock();
    int n = 1000;
    long long res = sum1(n);
    printf("\n Time taken to calculate sum upto %d is %lu ms.\n",n,(clock()-t));

    unsigned  long t2 = clock();
    long long res2 = sum2(n);
    printf("\n Time taken to calculate sum upto %d is %lu ms.\n",n,(clock()-t2));

    unsigned  long t3 = clock();
    long long res3 = sum3(n);
    printf("\n Time taken to calculate sum upto %d is %lu ms.\n",n,(clock()-t3));

 
    return 0;
}