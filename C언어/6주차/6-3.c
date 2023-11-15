#include<stdio.h>
int main()
{
    int x = 0, y = 0;
    int result;

    result = 2>3 || 6>7;
    printf("2>3 || 6>7: %d\n",result);

    result = 2||3 && 3>2;
    printf("2||3 && 3>2: %d\n",result);

    result = x = y = 1;
    printf("result = %d , x = %d , y = %d\n" , result,x,y);

    result = - ++x + y--;
    printf("result = %d , x = %d , y = %d\n",result ,x,y);

    return 0 ;


}