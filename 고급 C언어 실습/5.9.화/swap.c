#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
void print_swap(int *a, int *b,void(*pf)(int*,int*))
{
    printf("<swap 전>\n a: %d\n b: %d\n",*a,*b);
    swap(a,b);
    printf("<swap 후>\n a: %d\n b: %d\n",*a,*b);

}
int main()
{
    int a=10;
    int b=20;
    print_swap(&a,&b,swap);
    return 0;
}