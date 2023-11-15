#include<stdio.h>
int main()
{
    int i, t ,a , b ;
    scanf("%d" , &t);
    //i를 1부터 시작하기 때문에 i<=t로 놔야함
    for(i = 1; i <= t ; i++)
    {
        scanf("%d %d" , &a, &b);
        printf("%d\n" ,a+b);
    }
    
        
    return 0 ;
}