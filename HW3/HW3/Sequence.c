#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "rus");
	int a = 2;
	int sum = 0;
	printf("������� ������������������ �����: ");
	while (a != 0) {
		scanf_s("%d", &a);
		if (a > 0) {
			sum += a;

		}else {
			continue;
		}

	}
	printf("����� ������������� ������������������ �����: %d", sum);
	return;
}