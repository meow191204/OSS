#include<stdio.h>
float factorial(int n)
{
    int i;
    float j = 1;
    for(i=1;i<=n;i++)
    {
        j = j*i;
    }
    return j;
}
int main()
{
    int n;
    float a;
    float sum=1;
    printf("n을 입력하시오 : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        sum = sum+(1/factorial(a));
    }
    printf("오일러의 수는 %f 입니다.\n",sum);
    return 0 ;

}