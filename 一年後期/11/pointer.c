#include <stdio.h>

int main() {
    int a,b;
    int *pa,*pb;
    a = 5;
    b = 10;

    pa = &a;
    pb = &b;

    printf("a�̒l:%d a�̃A�h���X:%p\n",a,&a);
    printf("pa�̒l:%p pa�̃A�h���X:%p pa�̊֐ߎQ�Ɛ�̒l:%d\n",pa,&pa,*pa);

    *pb += 100;

    printf("b�̒l:%d b�̃A�h���X:%p\n",b,&b);
    printf("pb�̒l:%p pb�̃A�h���X:%p pb�̊֐ߎQ�Ɛ�̒l:%d\n",pb,&pb,*pb);
}
