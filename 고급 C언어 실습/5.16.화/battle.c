#include<stdio.h>
#include<string.h>
#include "battle.h"
#include "stats.h"

void battle(Stats zeldaStats , char* monsterName)
{
    char goblin,orc,golem;
    int mh = 0;
    int ma = 0;
    int i = 0;
    int zh = zeldaStats.health;
    int za = zeldaStats.attack;
    if(strcmp(monsterName,"goblin")==0)
    {
        mh = GOBLIN_HEALTH;
        ma = GOBLIN_ATTACK;

    }
    if(strcmp(monsterName,"orc")==0)
    {
        mh = ORC_HEALTH;
        ma = ORC_ATTACK;
    }
    if(strcmp(monsterName,"golem")==0)
    {
        mh = GOLEM_HEALTH;
        ma = GOLEM_ATTACK;
    }
    else 
    {
        printf("존재하지 않는 몬스터입니다!\n");
        return;
    }
    while(1)
    {
        
        printf("젤다가 %s 공격. %s의 체력: %d\n",monsterName,monsterName,mh-za);
        mh = mh-za;
        if(mh <=0)
        {
            printf("젤다 승리!\n");
            break;
        }
        printf("%s(이)가 젤다 공격. 젤다의 남은 체력: %d\n",monsterName,zh- ma);
        zh = zh-ma;
        if(zh <=0)
        {
            printf("%s 승리!\n",monsterName);
            break;
        }
    }
  

}
