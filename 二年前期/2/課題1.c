#include<stdio.h>

main() {
    printf("2022�N�l���̓��t����͂��Ă�������:");
    int m = 0;
    scanf("%d",&m);
    if(m < 0 || 30 < m) {
        printf("�G���[�Ȃ�ł���[");
    } else {
        m %= 7;
        switch(m){
        case 4:printf("���j��");break;
        case 5:printf("�Ηj��");break;
        case 6:printf("���j��");break;
        case 0:printf("�ؗj��");break;
        case 1:printf("���j��");break;
        case 2:printf("�y�j��");break;
        case 3:printf("���j��");break;
        default :printf("�s�G��");
        }
    }
}
