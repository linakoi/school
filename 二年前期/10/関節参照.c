#include <stdio.h>

int main() {
    int a,b;
    int *pa,*pb;
    a = 5,b = 10;
    pa = &a;
    pb = &b;
    printf("a�̒l:%d a�̃A�h���X:%p\n",a,&a);
    printf("pa�̒l:%d pa�̃A�h���X:%p pa�̊֐ߎQ�Ɛ�:%d\n",pa,&pa,*pa);
    *pa = *pb + 100;
    printf("\nb�̒l:%d b�̃A�h���X:%p\n",a,&a);
    printf("pb�̒l:%d pb�̃A�h���X:%p pb�̊֐ߎQ�Ɛ�:%d\n",pb,&pb,*pb);
}
