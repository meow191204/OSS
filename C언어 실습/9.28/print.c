#include<stdio.h>
int main()
{
    int a,b;
    printf("4자리 정수를 입력하시오 : ");
    scanf("%d" ,&a);

    printf("천의 자리 : %d\n" , a/1000);
    printf("백의 자리 : %d\n" , a%1000/100);
    printf("십의 자리 : %d\n" , a%1000%100/10);
    printf("일의 자리 : %d\n" , a%1000%100%10/1);

    return 0;
}