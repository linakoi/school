#include <stdio.h>

void func(int[]);

int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    printf("%d\n",(sizeof(a)));
    func(a);
}

void func(int *a) { //先頭アドレスしか取得できないのでサイズがわからない
    printf("%d\n",(sizeof(a)));
    printf("配列のサイズ:%d\n",(sizeof(a)/sizeof(int)));
    for(int i = 0;i < (sizeof(a)/sizeof(int));i++) {
        printf("%3d",a[i]);
    }
}
