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

void outputLongInt(int a[],int n){
    for(int i = 0; i < n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int div(int c[],const int a[],int b,int n){
    int rem = 0; //���܂�ł�
    for(int i = 0;i < n;i++) {
        c[i] = (rem*10 + a[i])/b; //(����܂ł̂��܂�+a[i]�̒l)/b
        rem = (rem*10 + a[i])%b; //���܂���X�V
    }
    return rem; //�]���Ԃ�
}
int main()
{
    int a[N],b,c[N] = {0};

    printf("����Z�����܂�\n16���܂ł̊����鐔����͂��Ă�������:");
    inputLongInt(a,N);
    outputLongInt(a,N); // �ő�N���̐�����z��a�ɓ��͂���

    printf("16���܂ł̊��鐔����͂��Ă�������:");
    scanf("%d",&b);

    int answer = div(c,a,b,N);
    printf("�]��:%d\n",answer);
    outputLongInt(c,N);
}
