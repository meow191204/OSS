#include<stdio.h>
int main()
{
    int t,a,b ;
    scanf("%d", &t);
    //초깃값을 지정하지 않고 t가 1보다 작아질때 까지 반복
    for (;t>0;t--)
    {
        scanf("%d %d" , &a , &b);
        printf("%d\n" , a+b);
    }
    return 0 ;
}