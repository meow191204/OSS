#include<stdio.h>
void factorial(int n)
{
    int i,j,k,sum;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = j*n;
            sum = sum +(1/k);
        }
        
    }
    printf("오일러의 수는 %d 입니다.\n",sum);
}

int main()
{
    int n;
    printf("n을 입력하시오 : ");
    scanf("%d",&n);
    void factorial(int n);
    return 0;

}