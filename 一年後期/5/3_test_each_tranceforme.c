#include <stdio.h>
main () {
    char c[6];
    scanf("%s",c);
    char ct;

    for (int i = 0;c[i] != '\0';i++) {
        if (c[i] >= 84) {
            ct = c[i]-32;
            printf("%c",ct);
        } else {
            ct = c[i]+32;
            printf("%c",ct);
        }
    }
}
