#include <stdio.h>

int main() {
    int i,j;//for•ª—p
    int seiseki[4][3] = {
    {80,70,60},
    {50,100,90},
    {60,80,70},
    {90,90,90}
    };
    float ave[4];
    for (i = 0;i < 4;i++) {
        ave[i] = seiseki[i][0] + seiseki[i][1] + seiseki[i][2];
        ave[i] /= 3;
        printf("Šw¶”Ô†%d:•½‹Ï“_%f\n",i+1,ave[i]);
    }
}
