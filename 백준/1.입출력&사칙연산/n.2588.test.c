#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int a ;
    char b[3] ;
    
    scanf("%d\n" , &a);
    scanf("%s" , b);
    int c ,d ,e ,f ; 
    c =  b[2]- '0';
    d =  b[1]- '0';
    e =  b[0]- '0';
    f = c + d*10 + e*100 ;
    printf("%d\n%d\n%d\n%d\n",c*a,d*a,e*a,f*a);
    return 0;
}