#include <stdio.h>
main() {
    char str[31]; //最後にヌル文字が入るため30文字まで
    printf("30文字まで入力できるお\n");
    scanf("%s",str);
    printf("%s",str);
}
