#include<stdio.h>
int main()
{
    int a,b,c,x;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b&&a>c)
    { 
        printf("가장 큰 정수는 %d 입니다.\n",a);
    }
    else if (b>a&&b>c)
    {
        printf("가장 큰 정수는 %d 입니다.\n",b);
    }
    else if (c>a&&c>b)
    {
        printf("가장 큰 정수는 %d 입니다.\n",c);
    }

    return 0 ;
}