#include <stdio.h>

void func_p(int *);

int main() {
    int a = 20;
    printf("a:%d\n",a);
    func_p(&a);
    printf("a:%d\n",a);
}



void func_p(int *p) {
    *p = 50;

}
