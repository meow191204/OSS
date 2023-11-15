#include<stdio.h>
int main()
{
    char code='X';
    int x=0,y=0;

    switch(code)
    {
        case 'X':
            x++; break;
        case 'Y':
            y++; break;
        default:
            x=y=0; break;
    }
    printf("%d %d\n",x,y);
    return 0;


}