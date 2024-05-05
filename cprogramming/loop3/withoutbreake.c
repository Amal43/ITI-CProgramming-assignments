#include<stdio.h>
int main()
{

    for (int x=1; x<=3; x++)
    {
        int x;
        printf("Enter the hour:\n");
        scanf("%d",&x);
        if(x<=12&&x>=1)
        {
            printf("this is hour\n");
            return 1;
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}
