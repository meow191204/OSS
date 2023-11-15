#include<stdio.h>
int main()
{
    FILE* fp;
    char buffer[100];

    fp = fopen("sample.txt","wt");
    if (fp==NULL)
    {
        printf("파일 오픈 오류 \n");
        return 1;
    }
    fputs("ABCDEFGH",fp);
    fclose(fp);

    fp = fopen("sample.txt","rt");
    if (fp==NULL)
    {
        printf("파일 오픈 오류 \n");
        return 1;
    }
    fseek(fp,1,SEEK_SET);
    printf("fseek(fp,3,SEEK_SET)= %c \n",fgetc(fp));

    fseek(fp,1,SEEK_CUR);
    printf("fseek(fp,-1,SEEK_SET)= %c \n",fgetc(fp));

    fclose(fp);
    return 0;

}