#include<stdio.h>
int main()
{
    char str[100];

    printf("문자열을 입력하시오: ");
    int i;
    for(i=0;i<100;i++)
    {
        str[i] = getchar();
        if (str[i] == '\n')
        break;
    }
    printf("%d\n",i);
    
    return 0;



}