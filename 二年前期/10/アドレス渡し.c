#include <stdio.h>
void func_p(int *p) {
    *p = 60;
}

int main() {
    int a = 9;
    printf("a:%d\n",a);
    func_p(&a);
    printf("a:%d",a);
}
