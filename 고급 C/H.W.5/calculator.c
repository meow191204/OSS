#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s1[4];
    double a;
    double b;
    double c = 0 ;
    printf("연산과 숫자 2개를 입력하시오 (add,sub,mul,div,squ) : ");
    scanf("%s %lf %lf",s1,&a,&b);
    if(strcmp(s1,"add")==0)
    {
        c = a+b;
        printf("연산의 결과 : %f\n",c);
    }
    else if(strcmp(s1,"sub")==0)
    {
        c = a-b;
        printf("연산의 결과 : %f\n",c);
    }
    else if(strcmp(s1,"mul")==0)
    {
        c = a*b;
        printf("연산의 결과 : %f\n",c);
    }
    else if(strcmp(s1,"div")==0)
    {
        if(fmod(a, b)==0)
        {
            c = a/b;
            printf("연산의 결과 : %f\n",c);
        }
        else 
        {
            printf("불가능한 연산입니다.\n");
        }
    }
    else if(strcmp(s1,"sqr")==0)
    {
        c = pow(a,b);
        printf("연산의 결과 : %f\n",c);
    }
    
    return 0;


}