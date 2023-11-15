#include<stdio.h>
#define PAN 30 

int main()
{
    int a;
    const int b = 150 ;
    printf("계란 수량<판> : ");
    scanf("%d" , &a);
    printf("계란은 총 %d 알 입니다.\n", a*PAN);
    printf("가격은 %d ₩ 입니다.\n", a*b*PAN);

    return 0 ;

}