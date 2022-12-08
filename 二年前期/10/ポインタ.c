#include <stdio.h>

int main() {
    int a;
    int *pa;
    a = 5;
    pa = &a;
    printf("aの値:%d aのアドレス:%p\n",a,&a);
    printf("paの値:%d paのアドレス:%p paの関節参照先:%d\n",pa,&pa,*pa);
}
