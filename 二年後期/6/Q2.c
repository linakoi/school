#include<stdio.h> // #include<string.h>
#define N 10
#define M 31
int main() {
    char str[N][M] = {0}; //���͕�����i�[
    char exit_s[] = "exit"; //exit �̓��͔���p strcmp ���g��
    char *p=(char *)str;
    int i,j,k,n=0;//n�̓J�E���g�p

    for(i=0; i<N; i++){ //exit���͂܂Ł@�������͔z��I���܂Ń��[�v
        scanf("%s",p+i*M);
        if(strcmp(exit_s,p+i*M)== 0){
            break;
        }
    }
    k=i;// ���͂��ꂽ�s���̋L��
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
