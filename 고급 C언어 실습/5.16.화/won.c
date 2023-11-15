#include<stdio.h>
#define PI 3.14159
#define SURFACE(r) ((r*r)*(4)*(PI))
#define VOLUME(r) ((r*r*r)*(4/3)*(PI))
int main()
{
    float r;
    printf("반지름을 입력하세요: ");
    scanf("%f",&r);
    printf("구의 겉넓이: %.2f\n",SURFACE(r));
    printf("구의 부피: %.2f\n",VOLUME(r));
    return 0;

}