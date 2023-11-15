
#include<stdio.h>
int main()
{
    int a;
    scanf ("%d",&a);
    //어떤걸 먼저 나눠야 하는지 잘 생각하기
    // 값의 범위?, 상위 규칙부터 순서대로 코드 짜기
    if(a%100!=0)
    {
        if(a%4==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else if (a%400==0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0 ;

}