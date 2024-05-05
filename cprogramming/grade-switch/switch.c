#include<stdio.h>
void main()
{
    //if statement
    printf("Enter Grade:");
    char grade;
    scanf("%c",&grade);
    switch (grade)
    {
        case 'A':
        {
            printf("Excellent");
        }
    break;
        case 'B':
        {
            printf("Very good");
        }
    break;
        case 'C':
        {
            printf("good");
        }
    break;
        default:
            printf("invalid");
    }
    return 0;
}

