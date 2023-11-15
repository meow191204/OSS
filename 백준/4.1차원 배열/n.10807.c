#include<stdio.h>
int main()
{
    int n,v,i;
    int a[100];
    int count=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            count = count+1;
        }
    }
    printf("%d\n",count);
    return 0;
}