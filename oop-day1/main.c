#include <stdio.h>
#include "string.h"


int main(){

    printf("Enter your name");
    ITIstring  name= readITIstring();
    printf("\n");
    printf("your name:");
    printITIstring(name);

}
