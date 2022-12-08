#include <stdio.h>
#define N 16	/* �ő包�� */

void inputLongInt( int x[], int n )
{
    char s[N + 3]; /* ���s������NULL�������l����3�����������m�� */
    int len = 0, i;
    fgets(s,sizeof(s),stdin); /* �L�[�{�[�h������� */
    while(s[len] != '\0')
    {
        if(s[len] == '\n' || s[len] == '\r')
            s[len]='\0'; /* ���s�����͊܂߂Ȃ� */
        else
            len++; /* �����𐔂��� */
    }
    if( len > n )
        len = n; /* �擪��n����ǂݍ��ݑΏۂƂ��� */
    for(i = 0; i < n; i++)
    {
        if(i < n - len)
        {
            x[i] = 0; /* 0�𖄂߂�*/
        }
        else
        {
            x[i] = (int)(s[i - (n - len)] - '0');
        }
    }
    return;
}

void outputLongInt(int a[],int n) {
    for(int i = 0;i < n;i++) { //�z��a���C���f�b�N�X�ԍ�0���珇�Ԃɏo�͂���
        printf("%d",a[i]);
    }
    printf("\n");
}


//4,���{�����Z�ł̌��Z��cmp��sub2�ɕ�����v���O����

int cmp(const int a[],const int b[],int n) { //a,b�̑召�𔻒肷��֐�
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) { //a<b�̏ꍇ
            return -1;
        } else if( a[i] > b[i]) { //a>b�̏ꍇ
            return 1;
        }
    }
    return 0; //a,b�������ꍇ
}

void sub2(int c[],const int a[],const int b[],int n) {
    int carry = 0; //�������肵���Ƃ�1�ɂ��Ĕ���
    for(int j = n - 1; j >= 0; j--) {
        if(a[j] - carry >= b[j]) {
            c[j] = a[j] - carry - b[j];//�����ʂ�a��b�̍���c�ɑ������
            carry = 0;
        } else {
            c[j] = (a[j] - carry + 10) - b[j];
            carry = 1;
        }
    }
}

int sub(int c[],const int a[],const int b[],int n) { //cmp��sub2���Ăяo�������Z������֐�
    switch(cmp(a,b,n)) {
    case 0:
        return 0;
    case 1:
        sub2(c,a,b,n);
        return 1;
    case -1:
        sub2(c,b,a,n);
        return -1;
    }
}

int main() {
    int a[N],b[N],c[N] = {0};

    inputLongInt(a,N);
    outputLongInt(a,N); // �ő�N���̐�����z��a�ɓ��͂���

    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = sub(c,a,b,N);
    printf("����:%d\n",answer);
    outputLongInt(c,N);
}
