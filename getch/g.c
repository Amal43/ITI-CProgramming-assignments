#include<stdio.h>

int main()
{

   printf("Enter char:");
   char x[100];
    int i=0;
    do
    {
        x[i]= getche();
    }while(x[i]!=13);
   printf("my char: %s",x[i]);

   return 0;


}

