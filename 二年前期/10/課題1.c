#include <stdio.h>

void swap(int *a,int *b) {
    int temp = *a; //*a��temp�ɕێ�����
    *a = *b; //*b��*a�ɑ��
    *b = temp; //*b��temp����
}

int main() {
    int a = 2;
    int b = 3;
    printf("a:%d b:%d\n",a,b); //����ւ���O�Ɋm�F
    swap(&a,&b); //�֐��Ăяo��
    printf("a:%d b:%d",a,b); //����ւ���
}
