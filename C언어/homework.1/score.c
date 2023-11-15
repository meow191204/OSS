#include<stdio.h>
int main()
{
    int a,b,c;
    printf("중간 고사 성적 : ");
    scanf("%d",&a);
    printf("과제 성적 : ");
    scanf("%d",&b);
    printf("기말 고사 성적 : ");
    scanf("%d",&c);
    printf("성적 평균 : %f\n" , (a+b+c)/3.0);
    return 0 ;

}