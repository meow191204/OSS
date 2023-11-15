#include<stdio.h>
void sub()
{
    static int scount = 0; // 정적변수 :  함수가 종료되어도 자동 소멸되지 않음
    int acount = 0 ;
    printf("scount =%d\t",scount);
    printf("acount =%d\n",acount);
    scount++;
    acount++;
}
int main(void)
{
    sub();
    sub();
    sub();
    return 0 ;
}