#include<stdio.h>
int main()
{
    int i,a;
    int sum = 0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0 ;3
}