#include<stdio.h>

#define max(x,y) ((x)>(y)?(x):(y))

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c)
    {
        printf("%d",10000+a*1000);
        
    }

}