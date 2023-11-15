#include<stdio.h>
int main()
{
    int a,b,c,x;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c)
    {
        printf("%d\n",10000+a*1000);
    }
    if(a==b&&b!=c||b==c&&c!=a)
    {
        printf("%d\n", 1000+b*100);
    }
    if(a==c&&c!=b)
    {
        printf("%d\n",1000+a*100);
    }
    if (a!=b&&b!=c&&a!=c)
    {
        x=0;
        if(x<b)
        {
            x=b;
        }
        if(x<a)
        {
            x=a;
        }
        if(x<c)
        {
            x=c;
        }
        
        printf("%d\n",x*100);
    }
    return 0;
}