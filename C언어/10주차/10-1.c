#include<stdio.h> 
int x;
void sub();

int main()
{
    for(x=0;x<10;x++)
        sub();
    return 0 ;

}

void sub()
{
    for(x=0;x<10;x++)
        printf("*\n");
}