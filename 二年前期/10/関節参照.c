#include <stdio.h>

int main() {
    int a,b;
    int *pa,*pb;
    a = 5,b = 10;
    pa = &a;
    pb = &b;
    printf("aの値:%d aのアドレス:%p\n",a,&a);
    printf("paの値:%d paのアドレス:%p paの関節参照先:%d\n",pa,&pa,*pa);
    *pa = *pb + 100;
    printf("\nbの値:%d bのアドレス:%p\n",a,&a);
    printf("pbの値:%d pbのアドレス:%p pbの関節参照先:%d\n",pb,&pb,*pb);
}
