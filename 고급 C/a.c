#include<stdio.h>
int main()
{
    int a[3][10] = {0,0};
    int i , num;

    for(i=0;i<11;i++)
    {
        a[0][i] = i;
        a[1][i] = i*i;
        a[2][i] = i*i*i;

    }
    printf("정수를 입력하시오 : ");
    scanf("%d",&num);

    for(i=0;i<11;i++)
    {
        if(num == a[2][i])
        {
            printf("%d 의 세제곱근은 %d\n",a[2][i],a[0][i]);
        }
    }
    return 0;
}