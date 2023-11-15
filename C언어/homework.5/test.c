#include<stdio.h>
#define m 3.3058
int main()
{
    float a;
    printf("평을 입력하세요: ");
    scanf("%f",&a);
    printf("%f 평방미터입니다.\n" , a*m);
    return 0;
}