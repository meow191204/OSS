#include<stdio.h>
void f(int n);
int n = 10;
int main(void)
{
    f(n);
    printf("n=%d\n",n);
    return 0;
}
void f(int n)
{
    n = 20;
}
