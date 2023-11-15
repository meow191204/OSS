#include<stdio.h>
int main()
{
    char i = 'a';
    int *pi;
    char *pc = &i;
    pi = (int*)pc;
    printf("%d",*pi);
    return 0;
    

}