#include<stdio.h>
int main()
{
    //n.10950 코드랑 같음
    int a , b, i ;
    scanf("%d",&i);
    for (;i>0;i--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}