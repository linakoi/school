int div(int ,int); //プロトタイプ宣言
int main() {
    double x,y,z;
    printf("xの値:");
    scanf("%lf",&x);

    printf("yの値:");
    scanf("%lf",&y);

    z = div(x,y);
    printf("zの値:%.2f",z);
}

int div(int a,int b) {
    double c;//加算結果を入れる
    c = a / b;
    return c;
}
