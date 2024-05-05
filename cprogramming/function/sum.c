#include <stdio.h>

 void function(int a, int b)
{
   int c;
   c =a +b;
   printf("%d" ,c);

}
 int function2(int a, int b)
 {
     int z;
     z =a+b;
     return z;
 }


int main()
{
   printf("Enter two numbers:");
   int x , y ;
   scanf("%d %d" ,&x ,&y);
   function(x ,y);

   return 0 ;
}
