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

void outputLongInt(int a[],int n){
    for(int i = 0; i < n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int div(int c[],const int a[],int b,int n){
    int rem = 0; //あまりです
    for(int i = 0;i < n;i++) {
        c[i] = (rem*10 + a[i])/b; //(これまでのあまり+a[i]の値)/b
        rem = (rem*10 + a[i])%b; //あまりを更新
    }
    return rem; //余りを返す
}
int main()
{
    int a[N],b,c[N] = {0};

    printf("割り算をします\n16桁までの割られる数を入力してください:");
    inputLongInt(a,N);
    outputLongInt(a,N); // 最大N桁の整数を配列aに入力する

    printf("16桁までの割る数を入力してください:");
    scanf("%d",&b);

    int answer = div(c,a,b,N);
    printf("余り:%d\n",answer);
    outputLongInt(c,N);
}
