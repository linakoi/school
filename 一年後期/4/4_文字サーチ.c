#include <stdio.h>
main() {
    char str[31]; //�Ō�Ƀk�����������邽��30�����܂�
    int sum = 0;
    char ser;

    printf("30�����܂œ��͂ł��邨\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\n�Ȃ�̕�����T�������ł���:");
    scanf(" %c",&ser);
    printf("%c��T���܂�\n",ser);

    for(int a = 0;a != 31;a++) {
        if(str[a] == ser) {
            sum++;
        }
    }
    printf("%d����͂���Ă��܂����I",sum);
}
