#include<stdio.h>
#include<stdlib.h> // atoi함수 포함
int main()
{
    
    char b[3] ;
    int a ;
    scanf("%d\n" , &a);
    scanf("%s" , b);
    int c =  b[2]- 48;
    // 아스키코드
    int d =  b[1]- 48;
    int e =  b[0]- 48;
    int f = atoi(b);
    printf("%d\n%d\n%d\n%d\n",c*a,d*a,e*a,f*a);
    return 1;
}