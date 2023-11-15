
#include<stdio.h>

struct book{
    char name[100];
    int year;
};

int main()
{
    struct book list[3];
    int i;

    for (i=0;i<3;i++)
    {
        printf("책 이름: ");
        scanf("%s",list[i].name);
        printf("출판 연도: ");
        scanf("%d",&list[i].year);
    }
    int max;
    for (i=0;i<2;i++)
    {
        if (list[i].year <list[i+1].year)
        {
            max = (i+1);
        }
    }
    printf("가장 최근에 출판된 책: %s\n",list[max].name);
    return 0;
}