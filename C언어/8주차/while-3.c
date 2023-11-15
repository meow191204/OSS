#include<stdio.h>
int main()
{
    int i = 0;
    while(i) // while(i !=0)
    {
        printf("%d is True.\n",i);
        i--;
    }

    printf("%d is False.\n",i);
    return 0;
}