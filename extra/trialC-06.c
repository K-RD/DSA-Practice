#include<stdio.h>


int main()
{
  int a[] = {10, 20, 30, 40, 50, 60};
  int *b[] = {a+3, a+7, a, a+5, a+1, a+2};

  int **c = b;

  **++c;
  printf("\nc is %p,\tb is %p,\ta is %p\n",c,b,a);
  printf("\n*c is %p,\t**c is %p\n",*c,**c);
  printf("\n%ld\t%ld\t%ld\n",c-b, *c-a, **c);

  **c++;
  printf("\nc is %p,\tb is %p,\ta is %p\n",c,b,a);
  printf("\n*c is %p,\t**c is %p\n",*c,**c);
  printf("\n%ld\t%ld\t%ld\n",c-b, *c-a, **c);

  *++*++c;
  printf("\nc is %p,\tb is %p,\ta is %p\n",c,b,a);
  printf("\n*c is %p,\t**c is %p\n",*c,**c);
  printf("\n%ld\t%ld\t%ld\n",c-b, *c - a, **c);

  return 0;
}
