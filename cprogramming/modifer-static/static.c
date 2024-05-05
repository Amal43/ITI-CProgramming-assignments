#include<stdio.h>

  int operation()
  {
    static int x=5;
    x=x-1;
    printf("x=%d\n",x);
    return x;
  }
int main()
{
  operation();
  operation();
  operation();

 return 0;
}
