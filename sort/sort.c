#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_MAX 200000
#define DEBUG

void showArray(int array[], int size, int step); /* �z���\������ */
void selectionSort(int array[], int size);       /* �I���\�[�g */
void insertionSort(int array[], int size);       /* �}���\�[�g */
void bubbleSort(int array[], int size);          /* �����\�[�g */

int main(int argc, char *argv[]){
	int data[ARRAY_MAX];
	int dataNum;
	int i;
	clock_t start, finish; /* time.h��clock_t�^���g�p�\ */
	double elapsedTime;
	/* �f�[�^���̐ݒ� */
	sscanf(argv[1], "%d", &dataNum);
	if(dataNum > ARRAY_MAX){
		printf("Number of data is beyond the array size!!\n");
		exit(0);
	}

	/* �f�[�^�̓ǂݍ��� */
	for(i = 0; i < dataNum; i++){
		scanf("%d", &data[i]);
	}

#ifdef DEBUG
#endif

	start = clock();           /* �J�n�����L�^ */
	insertionSort(data, dataNum); /* �����\�[�g���s�� */
	finish = clock();          /* �I�������L�^ */

	/* ���s���Ԃ̌v�Z */
	elapsedTime = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Elapsed time = %10.2f seconds\n", elapsedTime);

	return 0;
}

void showArray(int array[], int size, int step){
	int i;
	printf("%6d: ", step);
	for(i = 0; i < size; i++){
		printf("%6d ", array[i]);
	}
	printf("\n");
}

/*
 * ToDo:��{3�\�[�g�̊֐����ȉ��Ɋ���������
*/

void selectionSort(int array[], int size){       /* �I���\�[�g */
    for(int i = 0;i < size;i++) {
        int min = array[i];
        int change = i;
        for(int j = i+1;j < size;j++) {
            if(min > array[j]) {
                min = array[j];
                change = j;
            }
        }
        array[change] = array[i];
        array[i] = min;
    }
}

void insertionSort(int array[], int size) {       /* �}���\�[�g */
    for(int i = 1;i < size;i++) {
        int save = array[i];
        int savej = i;
        for(int j = i-1;array[j] > save;j--) {
            array[j+1] = array[j];
            savej = j;
        }
        array[savej] = save;
    }
}

void bubbleSort(int array[], int size)          /* �����\�[�g */{
    int flag = 1;
    int count = 0;
    for(int i = size-1;i > 0;i--) {
        count++;
        if(flag == 0) {
            break;
        }
        int flag = 0;
        for(int j = 0;j < i;j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag == 1;
            } else {
            flag == 0;
            }
        }
    }
}
