#include<stdio.h>

struct node{
  char *a;
  char *b;
};

typedef struct node t;

void f1(t s)
{
  s.a = "U";
  s.b = "V";
  printf("%s%s\n", s.a, s.b);
}

void f2(t *p)
{
  (*p).a = "V";
  (*p).b = "W";
  printf("%s%s\n", (*p).a, (*p).b);
}

int main()
{
  t s = {"A", "B"};
  printf("%s%s\n", s.a, s.b);
  f1(s);
  printf("%s%s\n", s.a, s.b);
  f2(&s);
  printf("%s%s\n", s.a, s.b);
}
