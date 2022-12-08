#include <stdio.h>
#define N 16	/* �ő包�� */

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
        c[n-i+1] = a[n-i] + b[n-i];  //�����ʂ�a��b�̘a��c�ɑ������
        if(carry == 1) {
            c[n-i+1] += 1; //���オ�肵���ꍇ1���Z����
        }
        if(c[n-i+1] >= 10) { //�J��オ�肪�N�����ꍇ
            c[n-i+1] %= 10; //�\�̈ʂ�؂�̂Ă�
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


int main() {
    int a[N],b[N],c[N+1] = {0};

    printf("�����Z�����܂�\n%d���܂ł̐�������͂��Ă�������:",N);
    inputLongInt(a,N);
    outputLongInt(a,N); /* �ő�N���̐�����z��a�ɓ��͂��� */

    printf("%d���܂ł̐�������͂��Ă�������:",N);
    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = add(c,a,b,N);
    printf("�ŏ�ʌ��̌J��オ��:%d\n",answer);
    outputLongInt(c,N+1);

    return 0;
}
