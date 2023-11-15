#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct net{
    char name[100];
    int tellNum;
    struct net *next;
} NET;

int main()
{
    NET *net;
    net = (NET *)malloc(3*sizeof(NET));
    char s[100];
    if (net==NULL)
    {
        printf("오류입니다.");
        exit(1);
    }
    for(int i = 0;i<3;i++)
    {
        printf("이름을 입력하세요: ");
        scanf("%s",net[i].name);
        printf("전화번호를 입력하세요: ");
        scanf("%d",&net[i].tellNum);
        net[i].next = &net[i+1];
    }
    NET *temp = net;
    printf("\n연락 중..\n");
    for(int i = 0;i<3;i++)
    {
        printf("이름 : %s\n전화번호 : %d\n",temp->name,temp->tellNum);
        temp = temp->next;
    }
    free(net);

    return 0;

}