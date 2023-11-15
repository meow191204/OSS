#include<stdio.h>
int main()
{
    //왜 틀렸을깜,,?
    int a,b,i,t;
    scanf("%d",&t);
    int sum[t]; //테스트 케이스가 t개인데, 
    for(i=1;i<=t;i++)
    {
        scanf("%d %d" , &a,&b);
        sum[i-1] = a+b; //여기다가 i를 넣으면 어떡행
        //배열은 0부터 시작이라구!! i-1 을 넣었어야징
        //그리구 t에 가비지 값이 들어 있는 상태에서 sum[t]를 정의하면
        //어떤 길이의 배열이 정의될지 모르자나.
        //t를 입력 받은 뒤에 배열을 정의했어야 했어.

    }
    for (i=1;i<=t;i++)
    {
        printf("Case #%d: %d\n", i,sum[i-1]);
    }
    return 0 ;
}