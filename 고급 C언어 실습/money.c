#include<stdio.h>
void array_add(int *A, int *B,int *C, int size)
{
    for(int i=0;i<size;i++)
    {
        C[i] = *(A+i)+*(B+i);
    }
}
int array_sum(int *A,int size)
{
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum = sum + *(A+i);
    }
    return sum;
}
int search(int *A,int size,int search_value)
{
    for(int i=0;i<size;i++)
    {
        if(*(A+i)==search_value)
        {
            return i+1;
        }
    }
    return -1;
}


int main()
{
    int basic[5] = {200,210,220,210,230};
    int bonus[5] = {30,10,20,50,40};
    int salary[] = {0,0,0,0,0};
    int size = sizeof(basic)/sizeof(int);

    printf("기본급 + 보너스 \n");
    array_add(basic,bonus,salary,size);
    for(int i=0;i<size;i++)
    {
        printf("%d     %d\n",i+1,salary[i]);
    }

    printf("회사에서 지급할 월급의 총액: ");
    printf("%d\n",array_sum(salary,size));

    int a=0;
    printf("검색할 금액을 입력하세요: ");
    scanf("%d",&a);
    printf("월급이 %d만원인 사람: %d번째\n",a,search(salary,size,a));
    return 0;
}