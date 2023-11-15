#include<stdio.h>
int main()
{
    int x;
    for (x=0;x<10;x++)
    {
        if (x > 5)
            continue;
        if (x > 8)
            break;
        printf("Hello,World!\n");

    }
    return 0;
}