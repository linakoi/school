#include<stdio.h>

main() {
    int score = 0;
    printf("�_��:");
    scanf("%d",&score);

    if(score < 0 || score >100) {
        printf("�L���Ȓl����͂��Ă�������\n");
    }else if(score <= 59) {
    printf("�s��\n");
    } else if(score <= 69) {
    printf("��\n");
    } else if(score < 79 ){
    printf("��\n");
    } else {
    printf("�D\n");
    }
}
