#include<stdio.h>

#define bool int
#define true =1
#define false = 0



int main(){

    bool x=5;
    bool y=10;
    bool z= x!=y;

    if (z == true)
        printf("right");
    else
        printf("invalid");

   return 0;
}
