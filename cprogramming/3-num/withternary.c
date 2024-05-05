#include<stdio.h>
void main()
{
    //Ternary
    int a, b,c,big;
    printf("Enter the numbers:");
    scanf("%d %d %d", &a, &b, &c);

    big=a>b? (a>c? a:c) :(b>c?b:c) ;
    printf("The biggest number is:%d \n",big);

    return 0;
}

