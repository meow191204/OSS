#include<stdio.h>
int main()
{
    int a,b,c,i;

    while(1)
    {
        printf("하나의 정수를 입력하시오 <0을 입력하면 종료> : ");
        scanf("%d",&a);
        if(a==0)
            break;
        
        else
        {
            for(i=1;i<10;i++)
            {   
                c = a * i ;
                printf("%d * %d = %d\n",a,i,c);
            }
            
        }
    }
    return 0;

}