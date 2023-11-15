#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char file1[100],file2[100];
    char butter[100];

    printf("파일 이름: ");
    scanf("%s",file1);

    printf("파일 이름: ");
    scanf("%s",file2);

    if ((fp1=fopen(file1,"r")) == NULL)
    {
        fprintf(stderr, "Source file %s can't be opened.\n",file1);
        exit(1);
    }
    if ((fp2=fopen(file2,"w")) == NULL)
    {
        fprintf(stderr, "Destination file %s can't be opened.\n",file2);
        exit(1);
    }

    while (fgets(butter,100,fp1)!=NULL)
    {
        fputs(butter,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}