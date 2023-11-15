#include<stdio.h>
#include<string.h>
struct info{
    char name[10];
    int number;
};
struct info add()
{
    struct info s;
    printf("이름 : ");
    scanf("%s",s.name);
    printf("휴대폰 번호 : ");
    scanf("%d",&s.number);
    return s;
}
void output(struct info std[],int cnt)
{
    int i;
    for(i=0;i<cnt;i++)
    {
        printf("\n이름 : %s\n",std[i].name);
        printf("휴대폰 번호 : %d\n",std[i].number);
    }
}
void check(struct info std[],int cnt)
{
    int i ;
    char a[10];
    printf("검색할 이름 : ");
    scanf("%s",a);
    printf("\n");
    for(i=0;i<cnt;i++)
    {
        if(strcmp(std[i].name,a)==0)
        {
            printf("이름 : %s\n",std[i].name);
            printf("휴대폰 번호 : %d\n",std[i].number);
        }
    }
}

int main()
{
    struct info std[5];
    int count =0;
    while(1)
    {
        int a;
        printf("-------------------------\n1. 추가\n2. 출력\n3. 검색\n4. 종료\n-------------------------\n");
        printf("메뉴를 선택하시오 : ");
        scanf("%d",&a);
        
        if (a == 4){
            break;
        }
        else if(a==1)
        {
            std[count] = add();
            count = count + 1;
        }
        else if(a==2)
        {
            output(std,count);
        }
        else if(a==3)
        {
            check(std,count);
        }
    }
    return 0;

}
