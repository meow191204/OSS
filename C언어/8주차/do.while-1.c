#include<stdio.h>
int main()
{
    int n , sum = 0;

    do
    {
        printf("Input a number: ");
        scanf("%d",&n);
        sum = sum + n;
    } while(n != 0 );

    printf("Sum of the input numbers = %d\n", sum);

    return 0;
    
}