#include<stdio.h>
void menu();
int set_max(int arr[],int size,int **pmax);
int set_min(int arr[],int size,int **pmin);
int set_count(int arr[],int size,int **pcount);

//#define SIZE 5
int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {0};
    int *pmax,*pmin,*pcount;
    int (*pf[3])(int *,int,int **) = {set_max,set_min,set_count};
    int i,n;

    for(i=0;i<SIZE;i++)
    {
        printf("배열 인덱스 %d번 : ",i);
        scanf("%d",arr[i]);
    }

    while(1){
        menu();
        printf("번호를 입력하세요: ");
        scanf("%d",&n);
    }
}