/* 多倍長整数の演算 */
#include <stdio.h>
#define N 16	/* 最大桁数 */

/* n(<=N)桁の多倍長整数を読み込み，配列x[]に格納する関数
 * 注意:N文字以上入力しないこと
 */
void inputLongInt( int x[], int n ) {
    char s[N + 3]; /* 改行文字とNULL文字を考慮し3文字分多く確保 */
    int len = 0, i;
    fgets(s,sizeof(s),stdin); /* キーボードから入力 */
    while(s[len] != '\0') {
        if(s[len] == '\n' || s[len] == '\r')
            s[len]='\0'; /* 改行文字は含めない */
        else
            len++; /* 桁数を数える */
    }
    if( len > n ) len = n; /* 先頭のn桁を読み込み対象とする */
    for(i = 0; i < n; i++) {
        if(i < n - len) {
            x[i] = 0; /* 0を埋める*/
        } else {
            x[i] = (int)(s[i - (n - len)] - '0');
        }
    }
    return;
}
/* main関数 */
int main(void) {
    int a[N];
    inputLongInt(a,N); /* 最大N桁の整数を配列aに入力する */
    return 0;
}
