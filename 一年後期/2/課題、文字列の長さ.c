#include <stdio.h>
main (){
    printf("���������͂��Ă�������:");
    char str[100];
    scanf("%s",str);
    printf("%s���󂯂Ƃ�܂���\n",str);
    int i = 0;
    for(;str[i] != '\0';i++) {
        printf("%d������\n",i+1);
    }
    printf("%d�������͂���܂���",i);
}
