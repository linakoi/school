#include <stdio.h>

int main() {
    int a;
    int *pa;
    a = 5;
    pa = &a;
    printf("a�̒l:%d a�̃A�h���X:%p\n",a,&a);
    printf("pa�̒l:%d pa�̃A�h���X:%p pa�̊֐ߎQ�Ɛ�:%d\n",pa,&pa,*pa);
}
