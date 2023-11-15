#include<stdio.h>
int main()
{
    long fact = 1;
    int n;

    printf("Input a number: ");
    scanf("%d",&n);

    for(int i =1;i<=n;i++)
    fact = fact * i;

    printf("%d! = %ld\n",n,fact);

    return 0;

}