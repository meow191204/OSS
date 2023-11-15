// 중1때 한거임 20살인 나는 쌉가능^^
#include<stdio.h>
int main()
{
    double a;
    double b;
    // 나눗셈을 할때는 두 변수의 자료형을 통일 시켜줘야 편함
    // %f = float
    // %d = int
    // %c = char = str = ?
    // %lf = double > float
    // printf("%앞 공백 .소수점 뒷자리 f")
    scanf("%lf %lf" , &a , &b);
    printf("%.10lf" , a/b);
    return 0;
}

