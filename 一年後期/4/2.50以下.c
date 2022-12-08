#include <stdio.h>
main() {
    int test[10][2] ={
        {78,87},
        {65,45},
        {82,77},
        {97,93},
        {55,59},
        {87,60},
        {45,41},
        {65,70},
        {72,80},
        {51,49}
    };
    int ssum = 0;
    int esum = 0;
    for(int i = 0;i <10;i++) {
        if(test[i][0] <= 50) {
            ssum++;
        }
        if(test[i][1] <= 50) {
            esum++;
        }
    }
    printf("数学の赤点は%d人です\n英語の赤点は%d人です",ssum,esum);
}
