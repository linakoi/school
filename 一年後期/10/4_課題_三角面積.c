#include <stdio.h>

int triangle(double,double);

int main() {
    double bot,hight;
    printf("��ӂƍ��������:");
    scanf("%lf %lf",&bot,&hight);
    double s = triangle(bot,hight);
    printf("��ӂ�%lf�ō�����%lf�̎O�p�`�̖ʐ�:%lf",bot,hight,s);
}
int triangle(double bot,double hight) {
    double s = 0;
    s = bot*hight/2;

    return s;
}
