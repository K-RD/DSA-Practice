#include<stdio.h>


int forLoop(int n){
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        for(int k=0;k<n;k++)
    {
        res++;
    }
    }
    return res;
}
int main()
{
    printf("for %d no of count is %d\n",2,forLoop(2));
    printf("for %d no of count is %d\n",3,forLoop(3));
    printf("for %d no of count is %d\n",4,forLoop(4));
    printf("for %d no of count is %d\n",5,forLoop(5));
    


}