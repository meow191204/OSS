#include<stdio.h>
int main()
{
    FILE* fp;
    char buffer[100];

    fp = fopen("sample.txt","wt");
    if (fp == NULL)
    {
        printf("파일 오픈 오류\n");
        return 1;

    }
    fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ",fp);
    fclose(fp);
    
    fp = fopen("sample.txt","wt");
    if (fp == NULL)
    {
        printf("파일 오픈 오류\n");
        return 1;

    }
    fseek(fp,3,SEEK_SET);
    printf
}