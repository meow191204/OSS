#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *list;
    list = (int*)malloc(3*sizeof(int));
    if (list==NULL){
        printf("error during memory allocation\n");
        exit(1);
    }
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;
    list[3] = 40;
    list[4] = 50;
    printf("%d %d %d\n",*list,*(list+1),*(list+2));
    printf("%d %d %d %d %d\n",list[0],list[1],list[2],list[3],list[4]);

    free(list);
    return 0;
}