#include<stdio.h>
int main()
{
    int i ;
    double f;
    
    f = 5/4;
    printf("1 = %f\n",f);

    f=(double)5/4;
    printf("2 = %f\n",f);

    f = 5.0/4;
    printf("3 = %f\n",f);

    f = (double)5/(double)4;
    printf("4 = %f\n",f);

    i = 1.3 + 1.8;
    printf("5 = %d\n",i);

    i = (int)1.3 +(int)1.8;
    printf("6 = %d\n",i);

    return 0 ;

}