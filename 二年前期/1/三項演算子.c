#include <stdio.h>

int main() {
    int d[] = {1,3,4,3,5,2,6,7,3,4,7,8,9,3,5,7,-9,4,0};
    int max = 0;
    for(int i =0;d[i] >= 0;i++) {
        max = max < d[i]? d[i] :max;
    }
    printf("ma\rx = %d",max);
}

// \r�F���s�Ȃ��Ő擪�ɖ߂�
