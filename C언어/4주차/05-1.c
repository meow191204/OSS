#include<stdio.h>
int main()
{
    int a;
    printf("1 size : %lu\n", sizeof(a));
    printf("2 size : %lu\n", sizeof(char));
    printf("3 size : %lu\n", sizeof(int));
    printf("4 size : %lu\n", sizeof(short));
    printf("5 size : %lu\n", sizeof(long));
    printf("6 size : %lu\n", sizeof(long long));
    printf("7 size : %lu\n", sizeof(float));
    printf("8 size : %lu\n", sizeof(double));
    printf("9 size : %lu\n", sizeof(unsigned));
    printf("10 size : %lu\n", sizeof(signed));
    return 0 ;
}