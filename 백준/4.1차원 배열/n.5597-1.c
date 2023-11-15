#include<stdio.h>
int main()
{
    int a[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int i,j ;
    int b[28];
    for(i=0;i<28;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<28;i++)
    {
        for(j=0;j<30;j++)
        {
            if(b[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<30;i++)
    {
        if(a[i]!=0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}