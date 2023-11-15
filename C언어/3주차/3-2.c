#include<stdio.h>
int main()
{
    int a,b,c ;
    scanf("정수를 입력하세요: %d\n" , &a);
    scanf("정수를 입력하세요: %d\n" , &b);
    scanf("정수를 입력하세요: %d" , &c);
    printf("합계는 %f 이고, 평균은 %f이다.\n" , a+b+c ,(a+b+c)/3.0);
    return 0 ;
}