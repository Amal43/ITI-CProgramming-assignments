#include<stdio.h>

int main(){

     int array[4] ={8 ,6 ,5 ,4};


     for(int i=0;i<4;i++)
     {
         printf("%d\n", *(array+i));
     }
}
