#include<stdio.h> // #include<string.h>
#define N 10
#define M 31
int main() {
    char str[N][M] = {0}; //入力文字列格納
    char exit_s[] = "exit"; //exit の入力判定用 strcmp を使う
    char *p=(char *)str;
    int i,j,k,n=0;//nはカウント用

    for(i=0; i<N; i++){ //exit入力まで　もしくは配列終わりまでループ
        scanf("%s",p+i*M);
        if(strcmp(exit_s,p+i*M)== 0){
            break;
        }
    }
    k=i;// 入力された行数の記憶
    for(i=0; i<k; i++){
        for(j=0; *(p+i*M+j)!='\0'; j++){
                if(*(p+i*M+j) == 'a') {
                    n++;
                }
        }
    }
    printf("\n%d",n);
    return 0;
}
