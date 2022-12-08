#include <stdio.h>
#define N 16	/* 最大桁数 */

void inputLongInt( int x[], int n )
{
    char s[N + 3]; /* 改行文字とNULL文字を考慮し3文字分多く確保 */
    int len = 0, i;
    fgets(s,sizeof(s),stdin); /* キーボードから入力 */
    while(s[len] != '\0')
    {
        if(s[len] == '\n' || s[len] == '\r')
            s[len]='\0'; /* 改行文字は含めない */
        else
            len++; /* 桁数を数える */
    }
    if( len > n )
        len = n; /* 先頭のn桁を読み込み対象とする */
    for(i = 0; i < n; i++)
    {
        if(i < n - len)
        {
            x[i] = 0; /* 0を埋める*/
        }
        else
        {
            x[i] = (int)(s[i - (n - len)] - '0');
        }
    }
    return;
}

void outputLongInt(int a[],int n) {
    for(int i = 0;i < n;i++) { //配列aをインデックス番号0から順番に出力する
        printf("%d",a[i]);
    }
    printf("\n");
}


//4,多倍長演算での減算をcmpとsub2に分けるプログラム

int cmp(const int a[],const int b[],int n) { //a,bの大小を判定する関数
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) { //a<bの場合
            return -1;
        } else if( a[i] > b[i]) { //a>bの場合
            return 1;
        }
    }
    return 0; //a,bが同じ場合
}

void sub2(int c[],const int a[],const int b[],int n) {
    int carry = 0; //桁下がりしたとき1にして判定
    for(int j = n - 1; j >= 0; j--) {
        if(a[j] - carry >= b[j]) {
            c[j] = a[j] - carry - b[j];//同じ位のaとbの差をcに代入する
            carry = 0;
        } else {
            c[j] = (a[j] - carry + 10) - b[j];
            carry = 1;
        }
    }
}

int sub(int c[],const int a[],const int b[],int n) { //cmpとsub2を呼び出し引き算をする関数
    switch(cmp(a,b,n)) {
    case 0:
        return 0;
    case 1:
        sub2(c,a,b,n);
        return 1;
    case -1:
        sub2(c,b,a,n);
        return -1;
    }
}

int main() {
    int a[N],b[N],c[N] = {0};

    inputLongInt(a,N);
    outputLongInt(a,N); // 最大N桁の整数を配列aに入力する

    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = sub(c,a,b,N);
    printf("符号:%d\n",answer);
    outputLongInt(c,N);
}
