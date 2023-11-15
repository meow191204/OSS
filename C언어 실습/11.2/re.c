#include<stdio.h>
int main()
{
    int a,b,c;
    printf("정수를 입력하시오 :");
    scanf("%d",&b);

    for(a=1;a<=b;a++)
    {   
        for(c=1;c<=a;c++)
        {
            printf("%d",c);
    
        }
        printf("\n");
    }
    return 0;
}