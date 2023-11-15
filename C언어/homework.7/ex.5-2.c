#include<stdio.h>
int main()
{
    char code='c';
    int x=0,y=0;

    if (code == 'X')
    {   x++;
        printf("%d\n",x);
    }
    else if (code == 'Y')
    {    y++;
        printf("%d\n",y);
    }
    else 
    {
        x=y=0;
        printf("%d %d\n",x,y);
    }
    return 0 ;
}