#include<stdio.h>
int main()
{
    char x;
    printf("알파벳을 입력하세요 : ");
    scanf("%c",&x);

    if (x == 'a'|| x == 'e'|| x == 'i'|| x == 'o'|| x == 'u')
    {
        printf("모음입니다.\n");
    }
    else 
    {
        printf("자음입니다.\n");
    }
    return 0;

}