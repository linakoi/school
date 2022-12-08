#include <stdio.h>
main() {
    char str[31]; //ÅŒã‚Éƒkƒ‹•¶š‚ª“ü‚é‚½‚ß30•¶š‚Ü‚Å
    int sum = 0;
    char ser;

    printf("30•¶š‚Ü‚Å“ü—Í‚Å‚«‚é‚¨\n");
    scanf("%s",str);
    printf("%s",str);

    printf("\n‚È‚ñ‚Ì•¶š‚ğ’T‚µ‚½‚¢‚Å‚·‚©:");
    scanf(" %c",&ser);
    printf("%c‚ğ’T‚µ‚Ü‚·\n",ser);

    for(int a = 0;a != 31;a++) {
        if(str[a] == ser) {
            sum++;
        }
    }
    printf("%d‰ñ“ü—Í‚³‚ê‚Ä‚¢‚Ü‚µ‚½I",sum);
}
