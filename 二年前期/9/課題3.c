#include <stdio.h>
#define N 2
#define M 3

int cal(int a,int b,int c, int d,int e,int f,int s[][M],int answer[2]) {
    for(int x = -100;x < 100;x++) { // x��y��-100����100�܂ł̐����ɂȂ�Ɖ��肷��
        for(int y = -100;y < 100;y++) {
            if((a*x + b*y == c) && (d*x + e*y == f)) { //-100����100�܂��ׂĂ̏ꍇ�Ōv�Z����.���Ă͂܂�����I������
                answer[0] = x;
                answer[1] = y;
                return 0;
            }
        }
    }
    printf("�G���[�ł�\n");
}

int main() {
    int a,b,c,d,e,f; //�W����萔�����w��
    printf("ax + by = c\ndx + ey = f\n�ł�.\na-f����͂��Ă�������:");
    scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int s[N][M] = {{1,2,3},{4,5,6}};
    int answer[2] = {0};
    cal(a,b,c,d,e,f,s,answer);
    printf("x = %d\ny = %d",answer[0],answer[1]);
}
