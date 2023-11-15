#include<stdio.h>
int main()
{
    int a[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int i,j,n,k;
    for(i=0;i<28;i++)
    {
        n=0;
        scanf("%d",&n);
        if(a[i]==n)
        {
            a[i]= 0;
            n--;
            for(j=i;j<28;j++)
            {
                a[j]=a[j+1];
            }

        }
    }
    printf("%d\n",a[0]);
    printf("%d",a[1]);
    return 0;
}