#include<stdio.h>
#define SIZE 5
void save_countup(int array[SIZE][SIZE])
{
    int i;
    for(i=1;i<=SIZE*SIZE;i++)
    {
      *(*array + (i-1)) = i;
    }
}
void print_countdown(int array[SIZE][SIZE])
{
    int (*pointer)[SIZE];
    pointer = array;
    int i;
    for (i =SIZE*SIZE-1;i>=0;i--)
    {
        printf("%d ",*(*pointer+i));
        //printf("%d",pointer[i][j]);
    }
}
int main()
{
    int array[SIZE][SIZE];
    save_countup(array);
    print_countdown(array);
    return 0;

}