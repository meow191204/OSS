#include<stdio.h>
void f(void);

int main()
{
    f();
    f();
    return 0;
}

void f(void)
{
    static int count = 0;
    printf("%d\n",count++);
}