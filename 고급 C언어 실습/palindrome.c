#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[100];
    printf("문자열을 입력하시오: ");

    int i;
    for(i=0;i<100;i++)
    {
        str[i] = getchar();
        if (str[i]== '\n')
        break;
        
    }
    i = strlen(str);
    for(int k=0;k<i;k++)
    {
        str[k] = toupper(str[k]);
    }
    int c;
    for(int j=0;j<i/2;j++)
    {
        if(str[j]!=str[i-(j+1)])
        {
            c=0;
            break;
            
        }
        else
        {
            c=1;
        }
    }
    if(c==0){
        printf("회문이 아닙니다.\n");
    }
    else{
        printf("회문입니다.\n");
    }
    
    return 0;
}