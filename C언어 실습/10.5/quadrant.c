#include<stdio.h>
int main()
{
    int x,y;

    printf("좌표를 입력하세요<x,y>:");
    scanf("%d %d" ,&x,&y);

    if (x>0&&y>0)
    {
        printf("1사분면\n");
    }
    else if (x<0&&y>0)
    {
        printf("2사분면\n");
    }
    else if (x<0&&y<0)
    {
        printf("3사분면\n");
    }
    else if (x>0&&y<0)
    {
        printf("4사분면\n");
    }
    else if (x==0||y==0)
    {
        printf("점은<%d,%d>에 존재합니다.\n",x,y);
    }
    
    return 0 ;
}