#include<stdio.h>
extern int x,y;

void a()
{
    printf("%d + %d = %d\n",x,y,x+y);
}
void b()
{
    printf("%d - %d = %d\n",x,y,x-y);
}
void c()
{
    printf("%d * %d = %d\n",x,y,x*y);
}
void d()
{

    printf("%d / %d = %f\n",x,y,(float)x/(float)y);
}