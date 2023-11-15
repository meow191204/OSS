#include<stdio.h>
void get_mul(float a,float b)
{

    printf("%f",a*b);
}
void get_div(float a,float b)
{

    printf("%f",a/b);
}
int main(void)
{
    float a,b;
    printf("두 개의 실수를 입력하시오 : ");
    scanf("%f %f",&a,&b);
    printf("두 수의 곱 : ");
    get_mul(a,b);
    printf("\n");
    printf("두 수의 나눗셈: ");
    get_div(a,b);
    printf("\n");

    return 0;   
}