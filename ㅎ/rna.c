#include<stdio.h>
int main()
{
    int type;
    printf("핵산의 종류는?\n");
    scanf("%d",&type);
    if (type == 1)
    {
        char a[6];
        printf("원하는 염기 서열을 입력하세요 : ");
        scanf("%s",a);
        if(a[0] == 'a')
        {
            printf("a - t\n");
        }
    }
    return 0;
}