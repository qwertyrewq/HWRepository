#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int sum = 0, num, a;
	printf("���������� ���������: ");
	scanf_s("%d", &num);
	printf("������� ��������: \n");
	while (num) {
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
		a = a * a;
		sum += a;
		num--;
	}
	printf("����� ��������� �������� �����: %d\n", sum);
	system("pause");
	return 0;
}