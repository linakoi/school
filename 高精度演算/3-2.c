#include<stdio.h>

int main() {
    double a,pi = 0; //a:�e�� pi:�ŏI�I�ȉ~������
    long n;
    printf("n:");
    scanf("%ld",&n);
    for(long i = 0;i < n;i++) {
        a = 1.0/(2.0*i+1.0); //arctan1�̊e�������߂�
        if(i%2 != 0){ //a���Ai�������̏ꍇ�͐��̐�,��̏ꍇ�͕��̐��ɂ���
            a *= -1;
            }
        pi+= a; //a��pi�ɉ��Z
    }
    pi *= 4; //��=4*arctan1�̂���
    printf("%.15lf\n",pi);
}
