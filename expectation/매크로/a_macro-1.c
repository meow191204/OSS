#include<stdio.h>
#include<stdlib.h>
#define DEBUG

#ifdef DEBUG
#define ASSERT(exp) {if(!(exp)) \
    { printf("가정(" #exp ")이 file %s, linke %d에서 실패.\n"\
    ,__FILE__,__LINE__),exit(1);}}
#else
#define ASSERT(exp)
#endif

int main(void)
{
    int sum = 100;
    ASSERT(sum == 100);
    return 0;
}