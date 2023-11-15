#include<stdio.h>
int main()
{
    int score[5];
    int x,i,size;
    int sum = 0;
    size = sizeof(score)/sizeof(score[0]);


    for(i=0;i<size;i++)
    {
        printf("%d번째 학생의 성적 입력: ",i+1);
        scanf("%d",&score[i]);
        sum = sum + score[i];
    }
    printf("전체 학생의 평균은 %d입니다.\n",sum/5);

    for(i=0;i<size;i++)
    {
        if(score[i]<sum/5)
        {
            printf("학생 %d : 불합격\n",i);
        }
        else
        {
            printf("학생 %d : 합격\n",i);
        }
    }
    return 0;

}