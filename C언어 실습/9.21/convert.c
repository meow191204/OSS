#include<stdio.h>
int main()
{
    double a;
    printf("실수를 입력하시오:");
    scanf("%lf" , &a);
    printf("실수 형식으로: %6lf\n" , a);
    printf("지수 형식으로: %e\n" , a);
    printf("\n");
    
    int b;
    printf("10진수 정수를 입력하시오.: ");
    scanf("%d" ,&b);
    printf("8진수로는 %#o 입니다.\n" , b);
    printf("10진수로는 %d 입니다.\n" , b);
    printf("16진수로는 %#x 입니다.\n", b);
    printf("\n");

    int x,y,z;
    printf("상자의 가로, 세로, 높이를 한번에 입력 :");
    scanf ("%d %d %d" , &x,&y,&z);
    printf ("상자의 부피는 %6lf 입니다.\n" , x*y*z*1.0);

    return 0;
}