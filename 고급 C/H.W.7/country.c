#include<stdio.h>
#include<string.h>

struct country{
    char name[30];
    char capital[30];
};
void find_capital(struct country* arr, int length, char* name)
{
    int i;
    for(i=0;i<length;i++)
    {
        if (strcmp(name,(arr + i)->name)==0)  //printf("%s", arr[i].name);
        {
            printf("%s의 수도는 %s입니다.\n",name,(arr+i)->capital); //printf("%s", arr[i].capital);
            return;
        }
    }
    printf("해당하는 나라의 정보를 찾을 수 없습니다.\n");    
}
int main()
{
    struct country countries[] = {{"한국","서울"},{"아르헨티나","부에노스아이레스"},{"튀르키예","앙카라"}};
    int len;
    char name[30];
    len = sizeof(countries)/sizeof(struct country);
    printf("나라 이름을 입력하세요: ");
    scanf("%s",name);
    find_capital(countries,len,name);
    return 0;

}