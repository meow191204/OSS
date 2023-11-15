#include<stdio.h>

enum days {TUE,WED,THU};

char *dats_name[] = {"Tuesday","Wednesday","Thursday"};

typedef struct day
{
    char * day_of_the_week;
    char dates[100];
    char subject[100];
    int time;
    char prof_name[100];
    struct day * next_time_schedule;
}DAY;

void print_schedule(DAY schedule)
{
    DAY *temp = &schedule;
    enum days d;
    for(d=TUE;d<=THU;d++)
    {
        
        printf("요일 : %s\n년/월/일 : %s\n과목 : %s\n강의시간 : %d\n강사이름 : %s\n\n",temp->day_of_the_week,temp->dates,temp->subject,temp->time,temp->prof_name);
        temp = (*temp).next_time_schedule;
    }
}

int main()
{
    DAY day1 = {dats_name[TUE],"2023/04/11","고급C프로그래밍",4,"김은경"};
    DAY day2 = {dats_name[WED],"2023/04/12","신호및시스템",3,"정의림"};
    DAY day3 = {dats_name[THU],"2023/04/13","인공지능수학",3,"손휘재"};

    day1.next_time_schedule = &day2;
    day2.next_time_schedule = &day3;
    print_schedule(day1);
    return 0;

}