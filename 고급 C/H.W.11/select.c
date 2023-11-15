#include<stdio.h>
#define SELECT 1
float s1(int x, int y)
{
#if SELECT == 1
    float z = 0.0;
    return z+x+y;
#elif SELECT == 2
    float z = 0.0;
    return x - y -z;
#endif
}
int main()
{
    int x,y;
    printf("두 수를 입력하시오 : ");
    scanf("%d %d",&x,&y);
    printf("계산 결과 : %f\n",s1(x,y));
    return 0;
}