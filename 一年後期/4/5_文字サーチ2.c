#include <stdio.h>
main() {
    char str[31]; //最後にヌル文字が入るため30文字まで
    int sum = 0;
    char ser[3];

    printf("30文字まで入力できます\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\nなんの文字列を探したいですか:");
    scanf(" %s",ser);
    printf("%sを探します\n",ser);

    for(int a = 0;a != 30;a++) {
        if(str[a] == ser[0]) {
            if(str[a+1] == ser[1]){
                sum++;
            }
        }
    }
    printf("%d回入力されていました！",sum);
}
