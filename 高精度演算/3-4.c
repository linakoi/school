#include <stdio.h>
#define N 2005

void inputLongInt(int x[], int n);
void outputLongInt(int a[],int n);
int add(int c[],const int a[],const int b[],int n);
int sub(int c[],const int a[],const int b[],int n);
int div(int c[],const int a[],int b,int n);
void rtol(int [],int []);

int main() {
    int yn1[N] = {0};
    int yn2[N] = {0};
    int tn1[N] = {0};
    int tn2[N] = {0};
    int pi1[N] = {0};
    int pi2[N] = {0};

    long n = 10000;

    yn1[1] = 8;
    long cn = 1;

    for(long i = 0;i < n;i++) {
        div(yn2,yn1,25,N);
        rtol(yn1,yn2);

        div(yn2,yn1,cn,N);
        if(i%2 != 0) {
            sub(tn2,tn1,yn2,N);
            rtol(tn1,tn2);
        } else {
            add(tn2,tn1,yn2,N);
            rtol(tn1,tn2);
        }
        cn += 2;
    }

    for(int i = 0;i < N;i++) {
        pi1[i] = tn2[i];
    }

    for(int i = 0;i < N;i++) {
        yn1[i] = 0;
        yn2[i] = 0;
        tn1[i] = 0;
        tn2[i] = 0;
    }
    yn1[0] = 9;
    yn1[1] = 5;
    yn1[2] = 6;
    cn = 1;

    for(long i = 0;i < n;i++) {
        div(yn2,yn1,57121,N);
        rtol(yn1,yn2);

        div(yn2,yn1,cn,N);
        if(i%2 != 0) {
            sub(tn2,tn1,yn2,N);
            rtol(tn1,tn2);
        } else {
            add(tn2,tn1,yn2,N);
            rtol(tn1,tn2);
        }
        cn += 2;
    }
    sub(pi2,pi1,tn2,N);

    //表示タイム君
    printf("pi = %d.\n",pi2[2]);
    for(int i = 3;i < N-2;i++) {
        printf("%d",pi2[i]);
        if((i - 2)%10 == 0) {
        printf(" ");
        }
        if((i - 2)%50 == 0) {
        printf("\n");
        }
    }
}

void rtol(int x[],int y[]) {
    for(int i = 0;i < N;i++) {
        x[i] = y[i];
    }
}




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
        c[n-i] = a[n-i] + b[n-i];  //同じ位のaとbの和をcに代入する
        if(carry == 1) {
            c[n-i] += 1; //桁上がりした場合1加算する
        }
        if(c[n-i] >= 10) { //繰り上がりが起きた場合
            c[n-i] %= 10; //十の位を切り捨てる
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


int div(int c[],const int a[],int b,int n){
    int rem = 0; //あまりです
    for(int i = 0;i < n;i++) {
        c[i] = (rem*10 + a[i])/b; //(これまでのあまり+a[i]の値)/b
        rem = (rem*10 + a[i])%b; //あまりを更新
    }
    return rem; //余りを返す
}
