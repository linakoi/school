int div(int ,int); //�v���g�^�C�v�錾
int main() {
    double x,y,z;
    printf("x�̒l:");
    scanf("%lf",&x);

    printf("y�̒l:");
    scanf("%lf",&y);

    z = div(x,y);
    printf("z�̒l:%.2f",z);
}

int div(int a,int b) {
    double c;//���Z���ʂ�����
    c = a / b;
    return c;
}
