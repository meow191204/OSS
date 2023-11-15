#include<stdio.h>
int main()
{
    int a,b,c,max;

    printf("3개의 정수를 입력하세요:");
    scanf("%d %d %d",&a,&b,&c);

    max = (a>b&&a>c)?a:(b>a&&b>c)?b:c;

    printf("가장 큰 정수는 %d 입니다.\n",max);

    return 0;
}