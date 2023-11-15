#include<stdio.h>
void convert(double *grades, double *scores, int size)
{
    int i;
    double x = 22.2222222;
    for (i =0;i<size;i++){
        *(scores+i) = *(grades+i)*x;
        printf("%f ", *(scores+i));
    }
  
}
int main()
{
    printf("학생 3명의 학점<4.5만점> : ");
    double grades[3];
    double scores[3];
    for(int i=0;i<3;i++)
    {
        double a =0;
        scanf("%lf",&a);
        grades[i] = a;
    }
    convert(grades,scores,3);
    return 0;
    
}