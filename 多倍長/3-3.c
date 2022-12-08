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

void outputLongInt(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

int sub(int c[],const int a[],const int b[],int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) { //aとbでbが大きい場合はaとbを入れ替えて計算する
            sub(c,b,a,n); //aとbを入れ替えて再起関数を呼び出す
            return -1; //符号1を返し終了する
        } else if( a[i] > b[i]) {
            int carry = 0; //桁下がりしたとき1にして判定
            for(int j = n-1;j >= 0;j--) {
                if(a[j] - carry >= b[j]) {//繰り下がりが起きない場合
                    c[j] = a[j] - carry - b[j];//同じ位のaとbの差をcに代入する
                    carry = 0;
                } else { //繰り下がりが起きる場合
                    c[j] = (a[j] - carry + 10) - b[j];
                    carry = 1;
                }
            }
            return 1; //符号1を返し終了する
        }
    }
    return 0; //最後までaとbのさがつかなかった場合は符号0を返し終了する
}

int main() {
    int a[N],b[N],c[N] = {0};

    printf("引き算をします\n%d桁までの整数を入力してください:",N);
    inputLongInt(a,N);
    outputLongInt(a,N); // 最大N桁の整数を配列aに入力する

    printf("d桁までの整数を入力してください:",N);
    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = sub(c,a,b,N);
    printf("符号:%d\n",answer);
    outputLongInt(c,N);
}
