#include<stdio.h>
#include "power.h"

int main(void)
{
    int x,y;

    printf("x의 값은:");
    scanf("%d",&x);
    printf("y의 값은:");
    scanf("%d",&y);
    printf("%d의 %d 제곱값 = %lf\n",x,y,power(x,y));

    return 0;
}