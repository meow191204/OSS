#include<stdio.h>

#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=

int search(int list[],int n, int key)
{
    int i = 0;
    
    while(i<=n AND list[i] ISNOT key)
    {
        i++;
    }
    if(i IS n)
        return -1;
    else
        return i;
}

int main(void)
{
    int m[] = {1,2,3,4,5,6,7};
    //printf("sizeof(m) = %lu\n",sizeof(m));
    //printf("sizeof(m[0]) = %lu\n",sizeof(m[0]));
    printf("%d\n",search(m,sizeof(m)/sizeof(m[0]),5)+1);
    return 0;
}
