#include<stdio.h>
#include<string.h>
int main()
{
    char *p;
    char s[]= "Hello";
    p = s + strlen(s) - 1;
    while( p >= s )
    {
        printf("%s \n", p);
        p--;
    }
    return 0;


}