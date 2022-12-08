#include <stdio.h>

int main () {
    int a = 0,b = 0;
    int c = ++a; //a‚ğ1‘‚â‚µ‚Ä‚©‚çc‚É‘ã“ü‚·‚é
    int d = b++; //b‚ğd‚É‘ã“ü‚µ‚Ä‚©‚ç,a‚É1‚ğ‰Á‚¦‚é
    printf("c = %d,d = %d",c,d);
}
