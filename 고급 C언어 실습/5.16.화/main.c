#include<stdio.h>
#include "stats.h"
#include "battle.h"
int main()
{
    char Name[100];
    int zl;
    printf("젤다의 레벨을 입력하세요 : ");
    scanf("%d",&zl);
    printf("싸울 문스터 이름을 입력하세요.\n (goblin,orc,golem) : ");
    scanf("%s",Name);
    battle(calculateStats(zl) , Name);
    
}