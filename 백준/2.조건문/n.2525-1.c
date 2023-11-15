#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    x = (b+c)/60; 
    y = (b+c)%60;
    if(y==0)
    {
        a = a+x;
        b = y;
    }
    else
    {
        a = a+x;
        b = y;
    }
    if(a>=24)
    {
        a = a - 24;
    }
    printf("%d %d\n",a,b);
    return 0;
}