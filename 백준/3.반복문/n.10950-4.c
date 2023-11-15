#include<stdio.h>
int main()
{
    int a,b,t,i;
    scanf("%d", &t);
    int sum[t];

    for (i = 1; i <= t; i++)
    {
        scanf("%d %d" , &a, &b);
        sum[i] = a+b;
    }
    for(i=1;i<=t;i++)
    {
        printf("%d\n", sum[i]);
    }
    return 0 ;

}