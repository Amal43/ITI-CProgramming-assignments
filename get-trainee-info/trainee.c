#include <stdio.h>

struct trainee{

     int ID;
     char Name[100];
     int Age;
};

typedef struct trainee Trainee;

int main(){
    Trainee T1;

    printf("Enter your ID:");
    scanf("%d", &T1.ID );

    printf("Enter your Name:");
    scanf("%s", &T1.Name);

    printf("Enter your Age:");
    scanf("%d", &T1.Age);




    printf("ID: %d\n" ,T1.ID );
    printf("Name: %s\n" , T1.Name);
    printf("Age: %d" ,T1.Age);


}

