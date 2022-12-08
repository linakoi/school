#include<stdio.h>

main() {
    printf("2022”NŽlŒŽ‚Ì“ú•t‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    int m = 0;
    scanf("%d",&m);
    if(m < 0 || 30 < m) {
        printf("ƒGƒ‰[‚È‚ñ‚Å‚·‚í[");
    } else {
        m %= 7;
        switch(m){
        case 4:printf("ŒŽ—j“ú");break;
        case 5:printf("‰Î—j“ú");break;
        case 6:printf("…—j“ú");break;
        case 0:printf("–Ø—j“ú");break;
        case 1:printf("‹à—j“ú");break;
        case 2:printf("“y—j“ú");break;
        case 3:printf("“ú—j“ú");break;
        default :printf("•s‰ÂŽG‹›");
        }
    }
}
