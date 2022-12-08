#include <stdio.h>

int triangle(double,double);

int main() {
    double bot,hight;
    printf("’ê•Ó‚Æ‚‚³‚ğ“ü—Í:");
    scanf("%lf %lf",&bot,&hight);
    double s = triangle(bot,hight);
    printf("’ê•Ó‚ª%lf‚Å‚‚³‚ª%lf‚ÌOŠpŒ`‚Ì–ÊÏ:%lf",bot,hight,s);
}
int triangle(double bot,double hight) {
    double s = 0;
    s = bot*hight/2;

    return s;
}
