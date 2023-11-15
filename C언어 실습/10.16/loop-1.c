#include<stdio.h>
int main()
{
    int i , result =1;
    int n;

    for(;;)
    {
        printf("n을 입력하시오 :");
        scanf("%d",&n);

        if(n<0)
        break;

        i = 1;
        result =1;
        while(i<=n)
        {
            printf("%d",i);
            printf(" ");
            result = result *i;
            i = i+1;
        
        }
        i = 1;
        printf("\n%d부터 %d까지의 곱 : %d\n", i,n,result);

    }

    
    return 0;
}