#include<stdio.h>
#include<math.h>
#include<locale.h>
void main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, s;
	printf("input 3 marks: ");
	scanf_s("%d %d %d", &a, &b, &c);

	s = a + b + c;

	if (a == -1 || b == -1 || c == 1 || a == 2 || b == 2 || c == 2) {
		printf("�� ����\n");
	}else{
		if (s == 15) {
			printf("��������\n");
		}else if (s >= 12) {
			printf("��������\n");
		}else{
			printf("��������\n");
		}
	}
	return ;

}