#include<stdio.h>
#define SIZE 5
void array_input(int a[],int b[], int size)
{
    int i;
    printf("배열 a의 값을 입력하시오 : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(a+i));
    }
    printf("배열 b의 값을 입력하시오 : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
}
int array_equal(int a[],int b[],int size)
{
    int i ;
    size = 0;
    for(i=0;i<5;i++)
    {
        if(a[i]==b[i])
        {
            size = 1;
        }
    }
    return size;
}
void array_copy(int a[],int b[], int size)
{
    int i;
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
}

int main()
{
    int x,y,i;
    int a[5];
    int b[5];
    array_input(a,b,SIZE);
    printf("------------------------------\n");
    printf("1. 배열 비교\n2. 배열 복사\n->");
    scanf("%d",&x);
    printf("------------------------------\n");
    if(x==1)
    {
        y = array_equal(a,b,SIZE);
        if(y==1)
        {
            printf("두 배열의 원소는 같습니다.\n");
        }
        else
        {
            printf("두 배열의 원소는 다릅니다.\n");
        }
        printf("a[5] : ");
        for(i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nb[5] : ");
        for(i=0;i<5;i++)
        {
            printf("%d ",b[i]);
        }
    }
    if(x==2)
    {
        array_copy(a,b,SIZE);
        printf("a[5] : ");
        for(i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nb[5] : ");
        for(i=0;i<5;i++)
        {
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;


}