#include<stdio.h>

int main() {
    int a[5] = {10,20,30,40,50};
    printf("�z��̃T�C�Y:%d\n",(sizeof(a)/sizeof(int)));
    for(int i= 0;i < sizeof(a)/sizeof(int);i++) {
        printf("*(a+i):%d\n",*(a+i));
    }
}
