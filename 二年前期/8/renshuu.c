#include<stdio.h>
int func_array(int []);
int main() {
    int a[] = {1,2,3,4,5,-1};
    int b;
    int i;
    b= func_array(a);
    printf("Œ‹‰Ê:%d\n",b);
    for(i = 0;a[i] >= 0;i++) {
        printf("%d",a[i]);
    }
}

int func_array(int n[]) {
    int i,c = 0;
    for(i = 0;n[i] >= 0;i++){
        c += n[i];
        n[i] = 0;
    }
    return c;
}
