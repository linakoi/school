#include <stdio.h>

int main() {
    int a,b;
    int *pa,*pb;
    a = 5;
    b = 10;

    pa = &a;
    pb = &b;

    printf("aの値:%d aのアドレス:%p\n",a,&a);
    printf("paの値:%p paのアドレス:%p paの関節参照先の値:%d\n",pa,&pa,*pa);

    *pb += 100;

    printf("bの値:%d bのアドレス:%p\n",b,&b);
    printf("pbの値:%p pbのアドレス:%p pbの関節参照先の値:%d\n",pb,&pb,*pb);
}
