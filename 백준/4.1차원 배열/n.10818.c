#include<stdio.h>
int main()
{
    int n,i;
    int max = -1000000;
    int min = 10000000;
    int a[1000000];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%d %d",min,max);
    printf("\n");
    return 0;
    
}