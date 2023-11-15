#include <stdio.h>

void swap(int *a, int *b, int size) {
    for(int j = 0; j < size; j++) {
        int temp = *(a+j);
        *(a+j) = *(b+j);
        *(b+j) = temp;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int size = sizeof(a) / sizeof(int);
    
    printf("swap 전\n\n");
    printf("배열 a: ");
    for(int i = 0; i < size; i++) {
        printf("%d ",a[i]);
    }
    printf("\n배열 b: ");
    for(int i = 0; i < size; i++) {
        printf("%d ",b[i]);
    }
    
    swap(a, b, size);
    
    printf("\n\nswap 후\n\n");
    printf("배열 a: ");
    for(int i = 0; i < size; i++) {
        printf("%d ",a[i]);
    }
    printf("\n배열 b: ");
    for(int i = 0; i < size; i++) {
        printf("%d ",b[i]);
    }
    
    return 0;
}

