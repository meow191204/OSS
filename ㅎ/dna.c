#include<stdio.h>
int main()
{
    while(1){
        int num;
        printf("DNA = 0, RNA = 1를 입력하세요(종료 = 3) :");
        scanf("%d",&num);
        if (num == 3)
        {
            break;
        }
        char a[6];
        printf("원하는 염기 서열을 입력하세요 : ");
        scanf("%s",a);
        if (num == 0)
        {
            //a.lower;
            if (a[0] == 'a')
            {
                printf("a - t\n");
            }
            if (a[0] == 't')
            {
                printf("t - a\n");
            }
            if (a[0] == 'c')
            {
                printf("c - g\n");
            }
            if (a[0] == 'g')
            {
                printf("g - c\n");
            }
        }
        else if(num == 1)
        {
            if (a[0] == 'a')
            {
                printf("a - u\n");
            }
            if (a[0] == 'u')
            {
                printf("u - a\n");
            }
            if (a[0] == 'c')
            {
                printf("c - g\n");
            }
            if (a[0] == 'g')
            {
                printf("g - c\n");
            }
        }
    }
    return 0;
}