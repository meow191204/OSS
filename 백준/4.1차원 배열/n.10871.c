#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,x;
    int a[10000];
    
    srand(time(NULL)); // rand의 경우 초기값이 계속 같게 나옴, 값을 계속 초기화 시켜줘야함.

    scanf("%d %d",&n,&x);
    for(int i =0;i<n;i++)
    {
        a[i]=(rand()%11); //10이하인 수들이 랜덤으로 저장됨
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;


}