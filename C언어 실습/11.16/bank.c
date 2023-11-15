#include<stdio.h>
int a = 50000;
void save(int sum)
{
    a = a+sum;
}
void draw(int b)
{
    a = a - b;
    if(a<0)
    {
    printf("금액이 부족합니다.\n");
    a= a+b;
    }
    
}
int main()
{
    int b,i,c,m;
    int sum = 0;
    
    for(;;)
    {
        printf("메뉴를 선택하시오 - 저축<1>,인출<2>,종료<3> : ");
        scanf("%d",&c);

        if(c==3)
        {
            printf("종료합니다.\n");
            break;
        }
        else if(c==1)
        {
            printf("저축할 금액 :");
            scanf("%d",&sum);
            save(sum);
            printf("현재 잔액은 %d 입니다.\n",a);
        }
        else if(c==2)
        {
            printf("인출할 금액 :");
            scanf("%d",&b);
            draw(b);
            printf("현재 잔액은 %d 입니다.\n",a);
        }
    }
    return 0;
}