#include<stdio.h>
int main()
{
    if(fork() || fork() )
        fork();

    printf("Hello World\n");
    return 0;
}
