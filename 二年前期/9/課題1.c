#include <stdio.h>
#define N 32

void trans(char a[]) {
    for(int i = 0;a[i] != '\0';i++) { //char配列の最後には\0が代入される
        if(a[i] <= 91) { //大文字なら
            a[i] += 32;　
        } else {　//小文字なら
            a[i] -=32;
        }
        printf("%c",a[i]); //毎回出力する
    }
}

int main() {
    char a[N] = "aiUeO";
    trans(a);
}
