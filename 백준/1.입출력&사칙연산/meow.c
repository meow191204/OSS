
// input = scanf
//print = printf
//변수는 "주소값"과 "value값"으로 나뉜다.
// 주소값은 변수명 앞에 "&"를 붙인다.
// value 값은 그냥 변수명


#include<stdio.h>
int main()
{
    int a;
    int b;
    a = 1 ;
    b = 3;
    printf("%d" , (a+b));
    // 중1때 한거임 20살인 나는 쌉가능^^

    scanf("%d %d" , &a, &b);
    printf("%d %d" , a,b);
    return 0;
}