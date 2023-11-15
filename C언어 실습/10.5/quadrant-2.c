#include<stdio.h>
int main()
{
    int x,y,z=0;

    printf("좌표를 입력하세요<x,y>:");
    scanf("%d %d",&x,&y);

    z = (x>0&&y>0)?1:z;
    z = (x<0&&y>0)?2:z;
    z = (x<0&&y<0)?3:z;
    z = (x>0&&y<0)?4:z;

    if (z>0)
    {
        printf("%d사분면\n", z);
    }
    else
    {
        printf("점은 <%d,%d>에 존재합니다.\n" , x,y);
    }
    
    return 0;
}
