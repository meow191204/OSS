#include <stdio.h>
int main()
{
    int x,y;

    x = 1;
    printf("x+1 = %d\n" , x+1);
    printf("y= x+1 ==> %d\n" , y = x+1);
    printf("x = x^y ==> %d\n" , x = x^y);
    printf("x = x>>y ==> %d\n" , x = x>>y);
    printf("y=10+(x=2+7) ==> %d\n" , y=10+(x=2+7));
    printf("x ==> %d\n" , x);
    printf("y=x=3 ==> %d\n" , y=x=3);
    printf("x ==> %d\n" , x);
    
    

    return 0;
}