#include<stdio.h>
int main()
{
    int h,m,H,M,count;
    scanf("%d %d",&h,&m);
    if(m<45)
    {
        m = 60 - (45- m);
        if(h==0)
        {
            h = 24 -1;
        }
        else
        {
            h = h - 1;
        }
        
    }
    else
    {
        m = m - 45;
    }
    printf("%d %d\n",h,m);
    return 0 ;

}