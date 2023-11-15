#include<stdio.h>
int main()
{
    char str[100];

    printf("문자열을 입력하시오: ");
    //scanf("%s",str);
    int i;
    for(i=0;i<99;i++)
    {
        str[i] = getchar();
        if (str[i]== '\n')
        break;
    }
    int count = 0;
    while(str[count]!=0)count++;
    printf("입력받은 문자열의 길이: %d\n",count);
    return 0;
}