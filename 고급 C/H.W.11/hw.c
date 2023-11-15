#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
    FILE* fp;
    FILE* fp1;
    int i;
    char hello[SIZE] = "Hello";
    char world[SIZE] = "World";
    char h[100] = "hello.txt";
    char w[100] = "world.txt";
    
    if ((fp=fopen(h,"w"))==NULL)
    {
        fprintf(stderr,"파일 %s을/를 열 수 없음./n", hello);
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        fprintf(fp,"%c",hello[i]);
    }
    fclose(fp);

    if ((fp1=fopen(w,"w"))==NULL)
    {
        fprintf(stderr,"파일 %s을/를 열 수 없음./n", world);
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        fprintf(fp1,"%c",world[i]);
    }
    fclose(fp1);

    if ((fp = fopen(h, "a")) == NULL) {
        fprintf(stderr, "파일 %s을/를 열 수 없음.\n", h);
        exit(1);
    }
    for(i=0;i<SIZE;i++)
    {
        fprintf(fp,"%c",world[i]);
    }
    fclose(fp);

    if ((fp = fopen(h, "r")) == NULL) {
        fprintf(stderr, "파일 %s을/를 열 수 없음.\n", h);
        exit(1);
    }
    
    fread(h,sizeof(char),SIZE*2,fp);
    for(i=0;i<SIZE*2;i++)
    {
        printf("%c",h[i]);
    }
    printf("\n");
    fclose(fp);
    
    return 0;
}