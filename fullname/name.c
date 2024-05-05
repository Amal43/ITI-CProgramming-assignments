#include<stdio.h>

int main(){

     printf("First Name:");
     char fname[100];
     scanf("%s", &fname);

     printf("\n");

     printf("Last Name:");
     char lname[100];
     scanf("%s" , &lname);

     printf("Full Name:%s %s",fname ,lname);


  return 0;

}
