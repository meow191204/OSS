#include<stdio.h>
void cal(int a,int b);
int main()
{
    int a,b,c;

    printf("물건값을 입력하시오 : ");
    scanf("%d",&a);
    printf("손님이 지불한 금액: ");
    scanf("%d",&b);
    cal(a,b);
    return 0;

}

void cal(int a,int b)
{
    int c = 0;
    int n1,n2,n3,n4,i;
    c = b-a;
    n1 = c/5000;
    c = c%5000;
    n2 = (c)/1000;
    c = c%1000;
    n3 = (c)/500;
    c = c%500;
    n4 = (c)/100;

    printf("오천원: %d 장\n",n1);
    printf("천원: %d 장\n",n2);
    printf("오백원: %d 장\n",n3);
    printf("백원: %d 장\n",n4);
   
}