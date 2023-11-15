#include<stdio.h>
int main()
{
    int a,b,c;
    printf("정수를 입력하세요: ");
    scanf("%d" , &a);
    printf("정수를 입력하세요: ");
    scanf("%d" , &b);
    printf("정수를 입력하세요: ");
    scanf("%d" , &c);
    printf("합계는 %f이고, 평균은 %f이다.\n" , (a+b+c)*1.0,(a+b+c)/3.0);
    return 0;

}