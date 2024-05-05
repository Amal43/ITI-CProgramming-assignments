#include<stdio.h>

int a= 10 , b= 8 ,c ; //global variables

int main()
{
    //local variables
    {
      c= a+b;
      printf("c=%d\n",c);
    }
    {
      float x =16.4;
      printf("x=%f",x);
    }

    return 0;
}
