#include<stdio.h>
int function(double);

int main()
{
    printf("%d",function(3.0));
    return 0;
}

int function(double x)
{
    return x+2;
}