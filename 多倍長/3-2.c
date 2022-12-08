#include <stdio.h>
#define N 16	/* 最大桁数 */

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

void outputLongInt(int a[],int n) {
    for(int i = 0;i < n;i++) {
        printf("%d",a[i]);
    }
    printf("\n");
}

int add(int c[],const int a[],const int b[],int n) {
    int carry = 0;  //桁上がりをするときに1にして判定
    for(int i = 1;i <= n;i++) {
        c[n-i+1] = a[n-i] + b[n-i];  //同じ位のaとbの和をcに代入する
        if(carry == 1) {
            c[n-i+1] += 1; //桁上がりした場合1加算する
        }
        if(c[n-i+1] >= 10) { //繰り上がりが起きた場合
            c[n-i+1] %= 10; //十の位を切り捨てる
            carry = 1; //次の位で1を足すためcaryyを1にする
        } else {
            carry = 0;//繰り上がりが起きなかった場合は0に
        }
        if(carry == 1 && i == n) {//配列cの最上位桁-1の桁(a,bの最上位桁)で繰り上がった場合
            c[0] = 1;//ｃの最上位桁を1にする
        } else {
            c[0] = 0; //cの最上位桁を0にする
        }
    }
    return carry; //最上位桁の繰り上がり上りがあったかを返す
}


int main() {
    int a[N],b[N],c[N+1] = {0};

    printf("足し算をします\n%d桁までの整数を入力してください:",N);
    inputLongInt(a,N);
    outputLongInt(a,N); /* 最大N桁の整数を配列aに入力する */

    printf("%d桁までの整数を入力してください:",N);
    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = add(c,a,b,N);
    printf("最上位桁の繰り上がり:%d\n",answer);
    outputLongInt(c,N+1);

    return 0;
}
