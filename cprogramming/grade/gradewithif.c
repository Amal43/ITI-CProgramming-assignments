#include<stdio.h>
void main()
{
    //if statement
    printf("Enter Grade:");
    char grade;
    scanf("%c",&grade);
    if (grade == 'A')
    {
        printf("Excellent");
    }
    else if(grade == 'B')
    {
        printf("very good");
    }
    else if(grade == 'c')
    {

        printf("good");
    }
    else
    {
        printf("In valid");
    }
    return 0;
}

