#include <stdio.h>

int main () {
    int a = 666,b = 123,m = 727,n =726;

    int x[n];
    x[0] = b;

    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        if(b == x[i]){
            n = i-1;
            break;
        }
    }
    printf("���������U��܂�.�O�ŏI���A����ȊO�̐����Ŏ��s���܂�\n");
    int hand;
    scanf("%d",&hand);
    for(int i = 0;i < 726;i++){
        if(hand){
            printf("---------\n");
            printf("|      |\n|      |\n|   ");
            printf("%d  |\n",(x[i]%6) + 1);
            printf("|      |\n|      |\n");
            printf("---------\n");
            printf("�Â��܂����H1or0\n");
            scanf("%d",&hand);
        }
    }
}
