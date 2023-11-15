#include<stdio.h>
#include<stdlib.h>
struct student{
    int num;
    char name[10];
    int g1,g2;
};
int main()
{
    FILE *fp1;
    FILE* fp;
    char fname[100];
    struct student stu1;
    struct student stu2;
    int count = 0;
    float total1 = 0.0;
    float total2 = 0.0;

    printf("Input the file name for grade: ");
    scanf("%s",fname);
    if ((fp1=fopen(fname,"r"))==NULL)
    {
        fprintf(stderr,"성적파일 %s 을/를 열 수 없음./n", fname);
        exit(1);
    }
    while(!feof(fp1))
    {
        fscanf(fp1, "%d %s %d %d", &stu1.num,stu1.name,&stu1.g1,&stu1.g2);
        fscanf(fp1,"%d %s %d %d",&stu2.num, stu2.name,&stu2.g1,&stu2.g2);
        total1 = total1+ stu1.g1+stu1.g2;
        total2 = total2+ stu2.g1 +stu2.g2;
        count = count + 2;
    }
    fclose(fp1);
    printf("Input the file name for average: ");
    scanf("%s",fname);

    if ((fp=fopen(fname,"w"))==NULL)
    {
        fprintf(stderr,"성적파일 %s 을/를 열 수 없음./n", fname);
        exit(1);
    }
    fprintf(fp,"%d %s %0.2f\n",stu1.num,stu1.name,(float)total1/count);
    fprintf(fp,"%d %s %0.2f\n",stu2.num,stu2.name,(float)total2/count);
    fclose(fp);
    return 0;

}