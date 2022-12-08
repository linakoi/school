/* 2J前期実験「多倍長演算」　参考ソースコード
  + Visual C++においてgets()関数が使えないため、
    その代替関数 gets_s()関数を使用した例
 */
#include <stdio.h>
#define N 16

/* 標準入力からn桁の多倍長整数を読み込み、配列x[]に格納 */
void inputLongInt( int x[], int n )
{
  char s[N + 3];
  int len = 0, i;
  gets_s(s, N + 3); /* キーボードから入力する : gets() を gets_s() で置き換え */
  while(s[len] != '\0'){
    len++; /* 桁数を求める */
  }
  for(i = 0; i < n; i++){
    if(i < n - len){
      x[i] = 0; /* 0を埋める*/
    }
    else{
      x[i] = (int)(s[i - (n - len)] - '0');
    }
  }
  return;
}

int main(void)
{
  int a[N];
  inputLongInt(a,N);		/* N桁の整数を配列aに入力する */
  return 0;
}
