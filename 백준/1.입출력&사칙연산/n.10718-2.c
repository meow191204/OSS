#include<stdio.h>
int main()
{
    char a[30]= "강한친구 대한육군";
    // 단어 개수에 비해 숫자가 2n+1보다 크면 가능
    //char a[?] = "" 로 데이터가 없을 경우 \0을 입력
    printf("%s\n%s\n", a,a);
    return 0 ;
}