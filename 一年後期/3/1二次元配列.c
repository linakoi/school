#include <stdio.h>
int main () {
    int i;
    int seiseki[4][4] ={
        {1,80,70,60},
        {2,50,100,90},
        {3,60,80,70},
        {4,90,90,90}
    };
    printf("”Ô† ”Šw •¨— ‰pŒê\n");
    for(i = 0;i <4;i++) {
        printf("%5d%5d%5d%5d\n"
               ,seiseki[i][0],seiseki[i][1],seiseki[i][2],seiseki[i][3]);
    }
}
