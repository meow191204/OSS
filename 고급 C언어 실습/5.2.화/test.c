#include <stdio.h>
#include <string.h>

void search(void *target, void *array, size_t len)
{
    char *t = (char *)target;
    char **a = (char **)array;
    int i;
    for (i = 0; i < len; i++)
    {
        if (strcmp(a[i], t) == 0)
        {
            printf("검색 성공!\n");
            return;
        }
    }
    printf("검색 실패..\n");
}

int main()
{
    char *array[] = {"H", "e", "l", "l", "o", "W", "o", "r", "l", "d"};
    char target[256];
    printf("검색할 문자를 입력하세요: ");
    scanf("%255s", target);
    search(target, array, sizeof(array)/sizeof(char *));
    return 0;
}
