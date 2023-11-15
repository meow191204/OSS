#include<stdio.h>
int main()
{
    char x;
    printf("알파벳을 입력하세요 : ");
    scanf("%c",&x);

    if (x == 'a')
    {
        printf("모음입니다.\n");
    }
    else if (x == 'e')
    {
        printf("모음입니다.\n");
    }
    else if (x == 'i')
    {
        printf("모음입니다.\n");
    }
    else if (x == 'o')
    {
        printf("모음입니다.\n");
    }
    else if (x == 'u')
    {
        printf("모음입니다.\n");
    }
    else 
    {
        printf("자음입니다.\n");
    }
    return 0;

}