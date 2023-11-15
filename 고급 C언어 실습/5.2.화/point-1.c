#include<stdio.h>

int get_sum(int array[],int size)
{
    int *p,*endp;
    double sum = 0.0;

    p = &array[0];
    endp = &array[size-1];

    while (p<=endp)
    {
        sum = sum + *p++;
    }

    return sum;
}

int main(void)
{
    int arr[3][6];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            arr[i][j] = 10;
            //printf("%d\n",arr[i][j]);
        }
    }
    int sum=0;
    for (i=0;i<3;i++)
    {
        sum = sum + get_sum(arr[i],6);
    }
    printf("이차원 배열 원소의 총합은 : %d\n",sum);

    return 0;
}