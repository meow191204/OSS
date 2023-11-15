#include<stdio.h>
#define PRINT(exp) printf("exp = %d\n",exp);
#define PRINT1(exp) printf(#exp"=%d\n",exp);

int main(void)
{
    int x = 5;
    PRINT(x);
    PRINT1(x);
    return 0;
}