#include<stdio.h>

main() {
    printf("うるう年か判別します:");
    int y = 0;
    scanf("%d",&y);
        if(y%4 == 0){
            printf("うるう年です！＞＜");
        }
}
