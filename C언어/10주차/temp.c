#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<5;i++)
    {

        int temp = 1;
        printf("[1] temp = %d",temp);
        temp++;
        printf("\t[2] temp = %d\n",temp);
    }
    return 0 ;
}