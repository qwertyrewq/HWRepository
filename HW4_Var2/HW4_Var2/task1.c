#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include<locale.h>

void main() {
	setlocale(LC_ALL, "rus");
	int num;
	printf("������� ������ ������� ");
	scanf_s("%d", &num);
	int* arr;
	arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++) {
		printf("������� ������ ");
		scanf_s("%d", &arr[i]);
	}for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	int MiN = 0;
	for (int i = 1; i < num - 1; i++) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			MiN++;
		}
	}
	printf("���������� ��������� ��������� %d\n", MiN);
	return ;

}