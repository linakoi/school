#include <stdio.h>

int main () {
    int a,b,m,n;
    printf("a,b,m�̏��ɓ��͂��Ă�������\n");
    printf("�q���g:666,123,727����͂���Ǝ���725�̔z�񂪂ł��܂��F");
    scanf("%d %d %d",&a,&b,&m);
    printf("���s���܂�\n");

    n = 10000;

    int x[n];
    x[0] = b;

    printf("x[0]�F%d\n",x[0]);

    for(int i = 1;i <= n;i++) {
        x[i] = (a*x[i-1])%m;
        printf("x[%d]�F%d\n",i,x[i]);
        if(b == x[i]){
            n = i-1;
            printf("n�̒l��%d�ł�",n);
            break;
        }
    }
}
