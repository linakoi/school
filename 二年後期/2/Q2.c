#include <stdio.h>

int main(void) {
    char *yobi[] = {"ŒŽ—j“ú","‰Î—j“ú","…—j“ú","–Ø—j“ú","‹à—j“ú","“y—j“ú","“ú—j“ú"};
    int hi = 0;
    scanf("%d",&hi);
    printf("¡“ú‚Í2022”N10ŒŽ%sIII><><",*(yobi + (hi+4)%7));
}
