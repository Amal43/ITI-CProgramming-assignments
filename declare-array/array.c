#include<stdio.h>
int main()
{
    //declare first even numbers
     int Arreven[4] ={0, 2, 4, 6};



    //three float number and initialize them using array index and print them using for

     float farray[3];
     farray[0]= 16.4;
     farray[1]= 6.4;
     farray[2]= 26.4;

     for(int i=0;i<3;i++)
     {
         printf("%.1f\n", farray[i]);
     }


   return 0;
}
