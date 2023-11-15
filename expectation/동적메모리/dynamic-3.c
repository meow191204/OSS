#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("정수 2개를 저장할 공간이 필요함 \n");
    int *list = (int *)malloc(2*sizeof(int));
    if(list == NULL) return 1;
    int i;
    int *list_new;
    for(i=0;i<2;i++)
    {
        printf("%d ",list[i]);
    }
    printf("\n");
    list[0] = 10;
    list[1] = 20;

    printf("정수 2개 --> 3개를 저장할 공간으로 확장\n");
    list_new = (int*)realloc(list,sizeof(int)*3);
    if(list_new==NULL) return 1;
    list_new[2] = 30;
    for(i=0;i<3;i++)
    {
        printf("%d ",list_new[i]);
    }
    printf("\n");

    return 0;
}