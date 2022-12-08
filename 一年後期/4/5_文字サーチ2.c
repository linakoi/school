#include <stdio.h>
main() {
    char str[31]; //ÅŒã‚Éƒkƒ‹•¶š‚ª“ü‚é‚½‚ß30•¶š‚Ü‚Å
    int sum = 0;
    char ser[3];

    printf("30•¶š‚Ü‚Å“ü—Í‚Å‚«‚Ü‚·\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\n‚È‚ñ‚Ì•¶š—ñ‚ğ’T‚µ‚½‚¢‚Å‚·‚©:");
    scanf(" %s",ser);
    printf("%s‚ğ’T‚µ‚Ü‚·\n",ser);

    for(int a = 0;a != 30;a++) {
        if(str[a] == ser[0]) {
            if(str[a+1] == ser[1]){
                sum++;
            }
        }
    }
    printf("%d‰ñ“ü—Í‚³‚ê‚Ä‚¢‚Ü‚µ‚½I",sum);
}
