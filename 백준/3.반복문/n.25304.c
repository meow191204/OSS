#include<stdio.h>
int main()
{  
    int x,i,a,b,n;
    int sum = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for (i = 1;i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        sum = sum + a*b;
    }
    if (x==sum)
    {
        printf("Yes\n");
    }
    else
    {
            printf("No\n");
    }
    return 0 ;
}