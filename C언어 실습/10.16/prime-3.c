#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i==j)
            {
                printf("%d",i);
            }
            if(i%j==0)
            {
                j = i+1;
            }   
        }
    }
    return 0;
}