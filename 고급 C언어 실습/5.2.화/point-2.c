#include<stdio.h>
#include<string.h>
#include <ctype.h>

void search(void *target,void *array,size_t len)
{
    char *t = (char *)target;
    char *a = (char *)array;
    int i ;
    for(i=0;i<len;i++)
    {
        if(*(a+i)==*t)
        {
            printf("검색 성공!\n");
            return;
        }
    }
    printf("검색 실패..\n");
}
int main()
{
    char array[] = {"HelloWorld"};
    char target;
    printf("검색할 문자를 입력하세요: ");
    scanf("%c",&target);
    search(&target,array,sizeof(array));
    return 0;
}