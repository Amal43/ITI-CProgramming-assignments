#include<stdio.h>
void main()
{
    //if statement
    printf("Enter Number:");
    int number;
    scanf("%d",&number);
    if (number % 2 ==0 )
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}
