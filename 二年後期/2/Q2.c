#include <stdio.h>

int main(void) {
    char *yobi[] = {"���j��","�Ηj��","���j��","�ؗj��","���j��","�y�j��","���j��"};
    int hi = 0;
    scanf("%d",&hi);
    printf("������2022�N10��%s�I�I�I><><",*(yobi + (hi+4)%7));
}
