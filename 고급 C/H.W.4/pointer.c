#include<stdio.h>
int main()
{
    int i;
    int *p = &i;
    printf("%d %d %d %d",i=i+1,i++,*p++,*p=*p+1);
    return 0;
}