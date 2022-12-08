#include <stdio.h>
main (){
    printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    char str[100];
    scanf("%s",str);
    printf("%s‚ðŽó‚¯‚Æ‚è‚Ü‚µ‚½\n",str);
    int i = 0;
    for(;str[i] != '\0';i++) {
        printf("%d•¶Žš–Ú\n",i+1);
    }
    printf("%d•¶Žš“ü—Í‚³‚ê‚Ü‚µ‚½",i);
}
