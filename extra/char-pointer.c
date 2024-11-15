#include<stdio.h>

int main(){
  int i = 300;
  char *ptr = (char *) &i;
  *++ptr = 2;
  printf("%d",i);
  return 0;
}

