#include<stdio.h>
int main()
{
    int a[3][5] = {
        { 34 , 17 , 93 , 6 , 103 },
        { 41 , 5 , 77 , 32 , 119 },
        { 64 , 56 , 124 , 2 , 45 }
    };


    int i,j;
    int sum = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++)
    {   sum = 0;
        for(j=0;j<5;j++)
        {
        sum = sum+a[i][j];
        }
        printf("%d행의 합계 : %d\n",i+1,sum);
        
    }
    return 0 ;
    
}