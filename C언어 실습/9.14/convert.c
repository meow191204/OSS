#include<stdio.h>
int main()
{
    float hour;
    int sec;
    printf("시간을 입력하세요: ");
    scanf("%f" , &hour);
    sec = hour*3600;
    printf("%f 시간은 %d 초이다.\n" , hour , sec);
    return 0;
}