#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp; // FILE�^�\����
	char fname[] = "kadai.txt";
	int chr;

	fp = fopen(fname, "r"); // �t�@�C�����J���B���s�����NULL��Ԃ��B
	if(fp == NULL) {
		printf("%s file open error\n", fname);
		return -1;
	}

	while((chr = fgetc(fp)) != EOF) {
		putchar(chr);
	}

	fclose(fp); // �t�@�C�������

	return 0;

	fclose(fp); // �t�@�C�������
}
