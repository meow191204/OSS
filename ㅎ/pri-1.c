#include <stdio.h>

int main()
{
    for (int i = 2; i <= 50; i++)
    {
        int num = 0;
        for (int j = 2; j <= i-1; j++)
        {
            if (i % j == 0)
            {
                num = 1;
            }
        }
        if (num == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
