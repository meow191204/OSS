#include<stdio.h>
#include<string.h>
int main(void){
    char s[] = "A bird in hand is worth two in the bush";

    char sub[]="hand";
    char *p;
    int loc;

    p = strstr(s,sub);

    if(p == NULL)
    {
        printf("%s가 발견되지 않음\n",sub);
    }   
    else
    {
        loc = (int)(p-s);
        printf("%d",loc);
    }
    return 0;
}