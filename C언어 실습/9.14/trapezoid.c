#include<stdio.h>
int main()
{
    int a,b,h;
    printf("밑변, 윗변, 높이를 입력하세요: ");
    scanf("%d %d %d", &a,&b,&h);
    printf("사다리꼴의 넓이는 : %f 입니다.\n" , ((a+b)*h)/2.0);
    return 0 ;
}