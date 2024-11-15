#include<stdio.h>

int main()
{
    double a[2] = {20.0, 25.0};
    double *p, *q;
    p = a;
    q = p+1;
    printf("%d\t%d", (int)(q-p), (int)(*q-*p));
    
}