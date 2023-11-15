#include<stdio.h>
int main()
{
    char x;
    printf("알파벳을 입력하세요 : ");
    scanf("%c",&x);

    switch(x)
    {
        case 'a':
        case 'u':    
        case 'e':
        case 'i':
        case 'o':
            printf("모음입니다.\n");
            break;
        default :
            printf("자음입니다.\n");
            break;
            
        return 0;
        

    }
}