#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    fp = fopen("aaa.c","r");
    if(fp = NULL) {
        printf("ファイルオープンエラー");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF) {
        printf("%c",c);
    }
    fclose(fp);
    return 0;


}
