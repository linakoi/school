#include <stdio.h>
main () {
    char str[64];
    char c;

    scanf("%s",str);
    scanf(" %c",&c);
    int ct = 0;

    for(int i = 0;str[i] != '\0';i++) {
        if(str[i] == c) ct++;

    }

    printf("%d",ct);
}
