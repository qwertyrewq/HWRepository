#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int sum = 0, num, a;
	printf("Количество элементов: ");
	scanf_s("%d", &num);
	printf("Введите элементы: \n");
	while (num) {
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
		a = a * a;
		sum += a;
		num--;
	}
	printf("Сумма квадратов элемента равна: %d\n", sum);
	system("pause");
	return 0;
}