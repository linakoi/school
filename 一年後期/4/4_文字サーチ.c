#include <stdio.h>
main() {
    char str[31]; //最後にヌル文字が入るため30文字まで
    int sum = 0;
    char ser;

    printf("30文字まで入力できるお\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\nなんの文字を探したいですか:");
    scanf(" %c",&ser);
    printf("%cを探します\n",ser);

    for(int a = 0;a != 31;a++) {
        if(str[a] == ser) {
            sum++;
        }
    }
    printf("%d回入力されていました！",sum);
}
