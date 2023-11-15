#include<stdio.h>

#define SIZE 5
int main()
{
    int buffer[SIZE] = {10,20,30,40,50};
    FILE *fp = NULL;

    fp = fopen("binary.bin","wb");
    if (fp==NULL)
    {
        fprintf(stderr,"Can't oopen binary.bin\n");
        return 1;
    }
    fwrite(buffer,sizeof(int),SIZE,fp);
    fclose(fp);
    return 0;
}