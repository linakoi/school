#include <stdio.h>

int main() {
    int even = 0,odd = 0;
    int n = 0;
    do{
        n++;
        if(n % 2 == 0) {
            even += n;
            } else {
            odd += n;
            }
    }while(n <= 100);

    printf("\nŠï”F%d   ‹ô”F%d",odd,even);
}
