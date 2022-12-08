#include <stdio.h>

int souwa2(int,int);

int main() {
    int a,b,s;
    printf("a‚Æb‚ð“ü—Í:");
    scanf("%d %d",&a,&b);
    s = souwa2(a,b);
    printf("%d~%d‚Ì‘˜a:%d",a,b,s);
}
int souwa2(int a,int b) {
    int s = 0;
    if(a >= b) {
        for(;b <= a;b++) {
        s += b;
        }
    } else if (b > a) {
        for(;a <= b;a++) {
        s += a;
        }
    }

    return s;
}
