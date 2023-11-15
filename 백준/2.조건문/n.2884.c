#include<stdio.h>
int main()
{
    int h,m,count,h_count;
    scanf("%d %d",&h,&m);
    count = 105 - m;
    h_count = h;
    if(count>=60)
    {
        h_count = h-1;
        if(h_count < 0)
        {
            h_count = 24 - 1;
        }
    }
    m = 120 - count;
    printf("%d %d\n",h_count,m);
    return 0;
}