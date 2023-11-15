#include<stdio.h>
int main()
{
    int i,j;
    int n = 100;
    
    

    for(i =2;i<=n;i++)
    {
        int k = 0; // k값을 초기화시켜줘야 함
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k = 1;
                break;
            }
        }
        if(k==0)
        printf("%d ",i);
        
    }
    return 0;
}