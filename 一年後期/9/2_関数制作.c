//���[�U�֐����g����z����+���̌v�Z
#include<stdio.h>
int add(int ,int); //�v���g�^�C�v�錾
int main() {
    int x,y,z;
    printf("x�̒l:");
    scanf("%d",&x);

    printf("y�̒l:");
    scanf("%d",&y);

    z = add(x,y);
    printf("z�̒l:%d",z);
}

int add(int a,int b) {
    int c;//���Z���ʂ�����
    c = a + b;
    return c;
}
