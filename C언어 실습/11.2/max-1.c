#include<stdio.h>
#define max 1000
int main()

{
    int a;
    int sum = 0;
    for(a=1;sum<max;a++)
    {
            sum = sum + a;
            if(sum>max)
            {
                break;
            }
    }
    printf("%d를 넘지 않는 가장 큰 합은 : %d이고, 그 때 n의 값은 : %d입니다.\n ",max,sum-a,a-1);

    return 0;

}