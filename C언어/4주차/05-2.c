#include<stdio.h>
#include<limits.h>
int main()
{
    short s_money = SHRT_MAX;
    unsigned short u_money = USHRT_MAX;

    s_money = s_money + 1;
    printf("s_money was initialised w/ %d and if add 1, it is overflowed to %d\n" ,SHRT_MAX , s_money);
    
    u_money = u_money + 1;
    printf("u_money was initialised w/ %d and if add 1, it is overflowed to %d\n",USHRT_MAX, u_money);

    return 0;
}