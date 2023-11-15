#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[100];
    int len,ct;

    printf("문자열을 입력하시오: ");
    gets(str);
    int i;
    for(i=0;i<100;i++)
    {
        str[i] = getchar();
        if (str[i]== '\n')
        break;
        
    }
    for(int k=0;k<i;k++)
    {
        str[k] = toupper(str[k]);
    }
    for(int j=0;j<50;j++)
    {
        if(str[j]!=str[i-(j+1)])
        {
            printf("회문이 아닙니다.\n");
            break;
        }
        else
        {
            printf("회문입니다.\n");
            break;
        }
    }
    
    return 0;
}