#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *list = (int *)calloc(5,sizeof(int));
    if(list == NULL ) return 1;
    int *list1;
    int a = 1;
    int i = 0;
    while(a>=0)
    {
        printf("양수를 입력하세요: ");
        scanf("%d",&a);
        list[i] = a;
        i = i+1; 
        if (i==4)
        {
            break;
        }
    }
    int z = i+1;
    while(1)
    {
        printf("양수를 입력하세요: ");
        scanf("%d",&a);
        if(a>=0)
        {
            list1 = (int *)realloc(list,sizeof(int)*(i+1));
            if(list1 == NULL) return 1;
            list1[i] = a;
            i = i+1;
            z = z+1;
        }
        if(a<0)
        {
            break;
        }
        
    }
    printf("입력한 값은 ");
    for (int j=0;j<i;j++)
    {
        printf("%d ",list1[j]);
    }
    printf("\n");
    return 0;

    
}