#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",a,b);
    scanf("%d",&c);
    if(120>b+c>60)
    {
        a = a+1;
        b = (b+c)-60;
    }
    else if(b+c==120)
    {
        a = a+2;
        b = (b+c)-120;
    }
    else if(180>b+c>120)
    {
        a = a+2;
        b = (b+c)-120;
    }
    else if(b+c==180)
    {
        a = a+3;
        b = (b+c)-180;
    }
    else if(240>b+c>180)
    {
        a = a+3;
        b = (b+c)-180;
    }
    else if(b+c==240)
    {
        a = a+4;
        b = (b+c)-240;
    }
    else if(300>b+c>240)
    {
        a = a+4;
        b = (b+c)-240;
    }



}