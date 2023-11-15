#include<stdio.h>
int is_multiple(int n, int m, int l)
{
    int a = 0; 
    if(l%n==0&&l%m==0)
    {
        a = 1;
    }
    return a;       
}
int main()
{
    int n,m,l;
    printf("첫 번째 정수를 입력하시오 : ");
    scanf("%d",&n);
    printf("두 번째 정수를 입력하시오 : ");
    scanf("%d",&m);
    printf("세 번째 정수를 입력하시오 : ");
    scanf("%d",&l);
    printf("%d\n",is_multiple(n,m,l));
    return 0;
}