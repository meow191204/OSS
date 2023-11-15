#include<stdio.h>
int main ()
{
    int a,b ;
    scanf("%d", &a);
    scanf("%d", &b);
    int c,d,e ;
    c = b/100 ;
    d = b/10 - c*10 ;
    e = b/1 - c*100 - d*10 ;
    printf("%d\n%d\n%d\n%d\n" , a*e,a*d,a*c,a*b);
    return 0 ;
}