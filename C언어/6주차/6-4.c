#include<stdio.h>
int main()
{
    int number;

    printf("Input Number : ");
    scanf("%d",&number);

    if (number % 2 == 0)
        printf("It is even number.\n");
    else
        printf("It is odd number.\n");

    return 0 ;
}