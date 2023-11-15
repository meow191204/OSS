#include<stdio.h>
int main()
{
    double a;
    printf("실수를 입력하시오:");
    scanf("%lf" , &a);
    printf("실수 형식으로: %6lf\n" , a);
    printf("지수 형식으로: %e\n" , a);
    printf("\n");

    return 0 ;
}