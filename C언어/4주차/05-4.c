#include<stdio.h>
int main()
{
    int x = 3;
    int y = -3;
    
    printf("x = %08X\n" , x);
    printf("y = %08X\n" , y);
    printf("x+y = %08X\n" , x+y); 
    // y에서 마지막이 D가 되는 이유는 2의 보수를 취해 마지막에 1을 더해줌
    
    return 0;
    
}