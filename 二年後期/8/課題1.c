#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp; // FILE型構造体
	char fname[] = "kadai.txt";
	int chr;

	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
	if(fp == NULL) {
		printf("%s file open error\n", fname);
		return -1;
	}

	while((chr = fgetc(fp)) != EOF) {
		putchar(chr);
	}

	fclose(fp); // ファイルを閉じる

	return 0;

	fclose(fp); // ファイルを閉じる
}
