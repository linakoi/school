#include <stdio.h>
main() {
    char str[31]; //�Ō�Ƀk�����������邽��30�����܂�
    int sum = 0;
    char ser[3];

    printf("30�����܂œ��͂ł��܂�\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\n�Ȃ�̕������T�������ł���:");
    scanf(" %s",ser);
    printf("%s��T���܂�\n",ser);

    for(int a = 0;a != 30;a++) {
        if(str[a] == ser[0]) {
            if(str[a+1] == ser[1]){
                sum++;
            }
        }
    }
    printf("%d����͂���Ă��܂����I",sum);
}
