#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct net {
    char name[100];
    int tellNum;
    struct net *next;
} NET;

void print(NET *net_next) {
    NET *temp = net_next;
    printf("연락 중..\n");
    while (temp != NULL) {
        printf("이름: %s\n전화번호: %d\n", temp->name, temp->tellNum);
        temp = temp->next;
    }
}

int main() {
    NET *net1 = NULL;
    NET *net2 = NULL;
    NET *net3 = NULL;

    char s[100];
    for (int i = 0; i < 3; i++) {
        NET *new_net = (NET*)malloc(sizeof(NET));
        if (new_net == NULL) {
            printf("메모리 할당 오류입니다.");
            return 1;
        }

        printf("이름을 입력하세요: ");
        scanf("%s", s);
        strcpy(new_net->name, s);
        printf("전화번호를 입력하세요: ");
        scanf("%d", &(new_net->tellNum));
        //new_net->next = NULL;

        if (i == 0) {
            net1 = new_net;
        } else if (i == 1) {
            net2 = new_net;
            net1->next = net2;
        } else {
            net3 = new_net;
            net2->next = net3;
        }
    }
    print(net1);

    free(net1);
    free(net2);
    free(net3);

    return 0;
}
