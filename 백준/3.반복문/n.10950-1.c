#include<stdio.h>
int main()
{
    int t, i, a, b ;
    i = 1;
    scanf("%d" , &t);
    while (i<=t)
    {
        scanf("%d %d" , &a, &b);
        i++;    
        printf("%d\n", a+b);
    }
    
    return 0 ;
}