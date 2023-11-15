#include<stdio.h>
int main()
{
    int x=1,num=0;

    if ( x == -1)
        num--;
    else if ( x == 1 )
        num++;
    else 
        num = 0;

    printf("%d %d\n",x,num);
    
return 0;

}