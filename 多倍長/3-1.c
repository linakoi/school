#include <stdio.h>
#define N 16	/* �ő包�� */

/* n(<=N)���̑��{��������ǂݍ��݁C�z��x[]�Ɋi�[����֐�
 * ����:N�����ȏ���͂��Ȃ�����
 */
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
    for(int i = 0;i < n;i++) { //�z��a���C���f�b�N�X�ԍ�0���珇�Ԃɏo�͂���
        printf("%d",a[i]);
    }
}

int main() {
    int a[N];
    printf("%d���܂ł̐�������͂��Ă�������:",N);
    inputLongInt(a,N); /* �ő�N���̐�����z��a�ɓ��͂��� */
    outputLongInt(a,N);
    return 0;
}
