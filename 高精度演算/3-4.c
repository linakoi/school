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

    //�\���^�C���N
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
    char s[N + 3]; /* ���s������NULL�������l����3�����������m�� */
    int len = 0, i;
    fgets(s,sizeof(s),stdin); /* �L�[�{�[�h������� */
    while(s[len] != '\0') {
        if(s[len] == '\n' || s[len] == '\r')
            s[len]='\0'; /* ���s�����͊܂߂Ȃ� */
        else
            len++; /* �����𐔂��� */
    }
    if( len > n ) len = n; /* �擪��n����ǂݍ��ݑΏۂƂ��� */
    for(i = 0; i < n; i++) {
        if(i < n - len) {
            x[i] = 0; /* 0�𖄂߂�*/
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
    int carry = 0;  //���オ�������Ƃ���1�ɂ��Ĕ���
    for(int i = 1;i <= n;i++) {
        c[n-i] = a[n-i] + b[n-i];  //�����ʂ�a��b�̘a��c�ɑ������
        if(carry == 1) {
            c[n-i] += 1; //���オ�肵���ꍇ1���Z����
        }
        if(c[n-i] >= 10) { //�J��オ�肪�N�����ꍇ
            c[n-i] %= 10; //�\�̈ʂ�؂�̂Ă�
            carry = 1; //���̈ʂ�1�𑫂�����caryy��1�ɂ���
        } else {
            carry = 0;//�J��オ�肪�N���Ȃ������ꍇ��0��
        }
        if(carry == 1 && i == n) {//�z��c�̍ŏ�ʌ�-1�̌�(a,b�̍ŏ�ʌ�)�ŌJ��オ�����ꍇ
            c[0] = 1;//���̍ŏ�ʌ���1�ɂ���
        } else {
            c[0] = 0; //c�̍ŏ�ʌ���0�ɂ���
        }
    }
    return carry; //�ŏ�ʌ��̌J��オ���肪����������Ԃ�
}

int sub(int c[],const int a[],const int b[],int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) { //a��b��b���傫���ꍇ��a��b�����ւ��Čv�Z����
            sub(c,b,a,n); //a��b�����ւ��čċN�֐����Ăяo��
            return -1; //����1��Ԃ��I������
        } else if( a[i] > b[i]) {
            int carry = 0; //�������肵���Ƃ�1�ɂ��Ĕ���
            for(int j = n-1;j >= 0;j--) {
                if(a[j] - carry >= b[j]) {//�J�艺���肪�N���Ȃ��ꍇ
                    c[j] = a[j] - carry - b[j];//�����ʂ�a��b�̍���c�ɑ������
                    carry = 0;
                } else { //�J�艺���肪�N����ꍇ
                    c[j] = (a[j] - carry + 10) - b[j];
                    carry = 1;
                }
            }
            return 1; //����1��Ԃ��I������
        }
    }
    return 0; //�Ō�܂�a��b�̂������Ȃ������ꍇ�͕���0��Ԃ��I������
}


int div(int c[],const int a[],int b,int n){
    int rem = 0; //���܂�ł�
    for(int i = 0;i < n;i++) {
        c[i] = (rem*10 + a[i])/b; //(����܂ł̂��܂�+a[i]�̒l)/b
        rem = (rem*10 + a[i])%b; //���܂���X�V
    }
    return rem; //�]���Ԃ�
}
