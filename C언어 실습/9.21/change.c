#include<stdio.h>
int main()
{
    double value1 ,value2,tmp;
    printf("value1의 값을 입력하시오 : ");
    scanf("%lf", &value1);
    printf("value1의 값을 입력하시오 : ");
    scanf("%lf", &value2);

    tmp = value1;
    value1 = value2;
    value2 = tmp;

    printf("vlaue1 = %lf\n", value1);
    printf("vlaue2 = %lf\n", value2);

    return 0;


}