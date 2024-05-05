#include <stdio.h>

struct trainee{

     int ID;
     char *Name;
     int Age;
};

typedef struct trainee Trainee;

int main(){

    Trainee T1;
    T1.ID = 8880099;
    T1.Name= "Ali";
    T1.Age= 23;

   printf("ID: %d\n" ,T1.ID );
   printf("Name: %s\n" , T1.Name);
   printf("Age: %d" ,T1.Age);

}
