#include<stdio.h>
int main()
{
    long fact = 1;
    int i = 1 ,n;

    printf("Input a number: ");
    scanf("%d",&n);

    while(i<=n)
    {
        fact = fact * i;
        i++;
    }

    printf("%d!= %ld\n",n,fact);

    return 0;
}