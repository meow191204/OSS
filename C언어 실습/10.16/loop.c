#include<stdio.h>
int main()
{
    int i=1;
    int n;
    int result = 1;
    printf("n을 입력하시오 : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
        i=1;
        result = 1;
        while(i<=n)
        {
            result = result*i;
            i = i+1;
            printf("n을 입력하시오 : ");
            scanf("%d",&n); 
        }
        
    i = 1;
    printf("%d부터 %d까지의 곱 : %d\n",i,n,result);
    return 0;

}