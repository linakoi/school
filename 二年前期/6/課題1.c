#include <stdio.h>

int diamond (int a, int b) {
    return a*b/2;
}

int  main(){
    int a,b;
    printf("�H�`�̖ʐς��v�Z���܂�.�c�Ɖ��̒�������͂��Ă�������:");
    scanf("%d %d",&a,&b);
    int answer = diamond(a,b);
    printf("%d",answer);
}
