#include "string.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


 ITIstring readITIstring(){

    ITIstring str;
    char value =getche();
    Node* N=(Node*)malloc(sizeof(Node));
    N->value=value;
    N->next=NULL;
    str.head = N;

    while(1)
     {
       value =getche();
     if(value == 13)
        break;

    Node* New=(Node*)malloc(sizeof(Node));
     New->value = value;
     New->next =NULL;




     }


 }
