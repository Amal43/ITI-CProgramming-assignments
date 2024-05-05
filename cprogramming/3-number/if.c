#include<stdio.h>
void main()
{
    //if statement
    int A, B,C;
    printf("Enter the numbers A,B and C:");
    scanf("%d%d%d", &A, &B, &C);

    if(A>=B && A>=C)
    {
      printf("%d is the largest number.",A);
    }
    else if(B>=A && B>=C)
    {
      printf("%d is the largest number.",B);
    }
    else (C>=B && C>=A);
    {
      printf("%d is the largest number.",C);
    }

    return 0;
}
