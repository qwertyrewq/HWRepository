#include <stdio.h>
#include<math.h>
#include<locale.h>
#include<windows.h>
void main() {
	setlocale(LC_ALL, "rus");
	int a, b, P, figure, num;
	float S, diagonal, r, C, p;
	p = 3.14;
	printf("������ ����!\n");
	Sleep(500);
	system("cls");
link1:
	printf("�������� ��� ������:\n 1. ����\n 2. �����������\n 3. �������������\n 0. �����\n");
	scanf_s("%d", &figure);
	system("cls");

	if (figure == 1) {
		printf("������� ������ �����: ");
		scanf_s("%f", &r);
		system("cls");
		printf("��������:\n 1. ����� ������� �����\n 2. ����� ����� ����������\n 3.����� ������� �����\n 4. ��������� � ������ �����\n 0. �����\n");
		scanf_s("%d", &num);
		if (num == 1) {
			P = p * r * r;
			printf("������� ����� = %f", P);
		}if (num == 2) {
			C = p * r * 2;
			printf("����� ���������� ����� = %f", C);
		}if (num == 3) {
			diagonal = r + r;
			printf("������� ����� = %f", diagonal);
		}if (num == 4) {
			system("cls");
			goto link1;
		}if (num == 0) {
			return;
		}
	}
	if (figure == 2) {
		printf("������� ��� ������� �������������� ������������: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("��������:\n 1. ����� ������� ������������\n 2. ����� �������� ������������\n 3. ��������� � ������ �����\n 0. �����\n");
		scanf_s("%d", &num);
		if (num == 1) {
			S = a * b * 0.5;
			printf("������� ������������ = %f", S);
		}if (num == 2) {
			P = (sqrt(a * a + b * b) + a + b);
			printf("�������� ������������ = %d", P);
		}if (num == 4) {
			system("cls");
			goto link1;
		}if (num == 0) {
			return;
		}
	}
	if (figure == 3) {
		printf("������� ��� ������� ��������������: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("��������:\n 1.����� ������� �������������� \n 2. ����� �������� ��������������\n 3. ����� ��������� ��������������\n 4. ��������� � ������ �������\n 0. �����\n");
		scanf_s("%d", &num);
		if (num == 1) {
			S = a * b;
			printf("������� �������������� = %f ", S);
		}if (num == 2) {
			P = (a + b) * 2;
			printf(" �������� �������������� = %d", P);
		}if (num == 3) {
				diagonal = sqrt(a * a + b * b);
				printf("��������� �������������� = %f", diagonal);
		}if (num == 4) {
			system("cls");
			goto link1;
		}if (num == 0) {
			return;
		}
	}if (figure == 0) {
		return;
	}
	return;
}