#include <stdio.h>

#define N 7
#define M 49

int main(void) {
    char str[N][M] = {
    "ohayou",
    "konnitiha",
    "gokigenyou",
    "konbanha",
    "sayounara",
    "osewaninarimasu"
    };

    char *p;
    int n= 0;
    p = (char *)str;
    printf("%s\n",str[1]);
    printf("%c\n",str[3][4]);
    *(p++);
    printf("\n*(p++);\n");
    printf("%c\n",*p);
    p=(char *)str[2];
    printf("%s\n",p);
    for(int i = 0;i < M*3;i++) {
        if(*(p+i) == 'o') {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
