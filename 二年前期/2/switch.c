#include<stdio.h>

main() {
    printf("�_��:");
    int score = 0;
    scanf("%d",&score);
    if(score < 0 || 100 < score) {
        printf("�G���[�Ȃ�ł���[");
    } else {
        score /= 10;
        switch(score){
        case 6:printf("��");break;
        case 7:printf("��");break;
        case 8:
        case 9:
        case 10:printf("�D");break;
        default :printf("�s�G��");
        }
    }
}
