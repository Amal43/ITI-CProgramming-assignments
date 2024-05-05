
#include<stdio.h>
void main()
{

    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    int num_integer = (int)num;
    float num_decimal = num - num_integer;

    printf("Integer part: %d, Decimal part: %.4f\n", num_integer, num_decimal);

}
