#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    delete(a,2);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}