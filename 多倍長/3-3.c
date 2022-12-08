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

void outputLongInt(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
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

int main() {
    int a[N],b[N],c[N] = {0};

    printf("�����Z�����܂�\n%d���܂ł̐�������͂��Ă�������:",N);
    inputLongInt(a,N);
    outputLongInt(a,N); // �ő�N���̐�����z��a�ɓ��͂���

    printf("d���܂ł̐�������͂��Ă�������:",N);
    inputLongInt(b,N);
    outputLongInt(b,N);

    int answer = sub(c,a,b,N);
    printf("����:%d\n",answer);
    outputLongInt(c,N);
}
