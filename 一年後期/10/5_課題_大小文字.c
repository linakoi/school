#include <stdio.h>

char tr(char);
main () {
    char c[101];
    char ct;
    scanf("%s",c);
    for(int i = 0;c[i] !='\0';i++) {
        ct = tr(c[i]);
        printf("%c",ct);
    }

}

char tr(char c) {
    char ct;
    if (c >= 84) {
        ct = c-32;
    } else {
        ct = c+32;
    }
    return ct;
}

