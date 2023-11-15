#include<stdio.h>
void cube_area(float a)
{
    printf("정육면체의 겉넓이는 %f\n",a*a*6);
}
void cube_vol(float a)
{
    printf("정육면체의 부피는 %f\n",a*a*a);
}
void menu()
{
    printf("================\n======메뉴======\n================\n");
    printf("1. 정육면체의 겉넓이\n2. 정육면체의 부피\n3. 종료\n");
    printf("선택하시오 : ");
}
int main()
{
    float a;
    int b;
    for(;;)
    {
        menu();
        scanf("%d",&b);
        if(b==3)
        {
            break;
        }
        else
        {
            printf("한 모서리의 길이를 입력하시오 :");
            scanf("%f",&a);
            
            if (b==1)
            {
                cube_area(a);
            }
            else
            {
                cube_vol(a);
            }
        }
    }
    return 0;
}