#include<stdio.h>


void swap(int*a ,int*b){

   int z = *a;
   *a = *b;
   *b =z;


}
int main(){

    int x=4;
    int y=8;

    swap(&x ,&y);

    printf("%d\n%d",x ,y);

return 0;
}
