#include<stdio.h>
int main()
{
    int x=1 , num =0;

    switch(x)
    {
        case -1:
            num--;
            break;

        case 1:
            num++;
            break;

        default:
            num = 0;
            break;
    }
        printf("%d %d\n",x,num);
    
        return 0 ;
}