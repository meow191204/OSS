#include<stdio.h>
int main()
{
    int i,n,sum;

    printf("n을 입력하세요:");
    scanf("%d",&n);

    i = 1;
    sum = 0;

    while(i <= n)
    {
        sum = sum + i;
        i ++;
    }
    printf("sum = %d\n", sum);
    return 0 ;
}