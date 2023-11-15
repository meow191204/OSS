#include<stdio.h>
int main()
{
    int a;
    int b = 0;
    for(a=1;a<100;a++)
    {
        if(a%7==0)
        {
            b = b+a;
        }

    }
    printf("1부터 100사이의 모든 7의 배수의 합은 %d입니다.\n",b);
}