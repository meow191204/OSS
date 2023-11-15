#include<stdio.h>
int main()
{
    int n = 0;
    int i,a[9];
    int max = 0;

    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
            n = i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",n);
    
    return 0;

}