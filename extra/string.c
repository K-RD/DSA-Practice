#include<stdio.h>

void fx();

int main()
{
    fx();
    return 0;
}

void fx()
{
    char a;
    if( (a=getchar()) !='\n')
        fx();
    if(a != '\n')
        putchar(a);
}
        

