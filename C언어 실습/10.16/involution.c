#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int i = 10;
  
    printf("값을 입력하시오 : ");
    scanf("%d",&n);

    for(i = 10;i<=n;i=i+2)
    {
        sum = sum + i*i;
    }
    printf("for문을 이용한 10부터 %d까지의 짝수의 거듭제곱의 합은 : %d입니다.\n",n,sum);
    i = 10;
    sum = 0;
    while(i<=n)
    {
        sum = sum +i*i;
        i=i+2;
    }
    printf("while문을 이용한 10부터 %d까지의 짝수의 거듭제곱의 합은 : %d입니다.\n",n,sum);
    i = 10;
    sum = 0;
    do
    {
       sum = sum +i*i;
        i=i+2;
    } while (i<=n);

    printf("do-while문을 이용한 10부터 %d까지의 짝수의 거듭제곱의 합은 : %d입니다.\n",n,sum);
    

    return 0;

}