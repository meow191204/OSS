#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int len,ct;
    printf("문자열을 입력하시오 :");
    
    gets(str);
    len=strlen(str);

    for (int k =0;k<len;k++){
        str[k]=toupper(str[k]);
    }
    int c;
    for (int j =0; j<len/2;j++){
        if(str[j]!=str[len-1-j]){
           c=0;
            break;
        }
        else{
            c=1;
            
            
        }
    }
    if(c==0){
    printf("회문이 아닙니다.\n");
    }
    else{
    printf("회문입니다.\n");
    }
    
    return 0;
}