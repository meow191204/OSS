#include<stdio.h>
int main()
{
    int i,j;
    int sum = 0;
    for(i=10;i<31;i++)
    {
        for(j=0;j<6;j++)
        {
            sum = sum +i+j;
        }
    }
    printf("%d\n",sum);
    return 0 ;
}