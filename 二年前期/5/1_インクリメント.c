#include <stdio.h>

int main () {
    int a = 0,b = 0;
    int c = ++a; //a��1���₵�Ă���c�ɑ������
    int d = b++; //b��d�ɑ�����Ă���,a��1��������
    printf("c = %d,d = %d",c,d);
}
