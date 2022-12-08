#include <stdio.h>

void swap(int *,int *);

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a:%d b:%d",a,b);
    swap(&a,&b);
    printf("a:%d b:%d",a,b);
}



void swap(int *p,int *q) {
    int a = *p;
    *p = *q;
    *q = a;
}
