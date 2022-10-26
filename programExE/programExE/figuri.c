#include <stdio.h>
#include<math.h>
#include<locale.h>
#include<windows.h>
void main() {
	setlocale(LC_ALL, "rus");
	int a, b, P, figure, num;
	float S, diagonal, r, C, p;
	p = 3.14;
	printf("Доброе утро!\n");
	Sleep(500);
	system("cls");
link1:
	printf("Выберете тип фигуры:\n 1. Круг\n 2. Треугольник\n 3. Прямоугольник\n 0. Выход\n");
	scanf_s("%d", &figure);
	system("cls");

	if (figure == 1) {
		printf("Введите радиус круга: ");
		scanf_s("%f", &r);
		system("cls");
		printf("Выберете:\n 1. Найти площадь круга\n 2. Найти длину окружности\n 3.Найти диаметр круга\n 4. Вернуться к выбору фигур\n 0. Выход\n");
		scanf_s("%d", &num);
		if (num == 1) {
			P = p * r * r;
			printf("Площадь круга = %f", P);
		}if (num == 2) {
			C = p * r * 2;
			printf("Длина окружности круга = %f", C);
		}if (num == 3) {
			diagonal = r + r;
			printf("Диаметр круга = %f", diagonal);
		}if (num == 4) {
			system("cls");
			goto link1;
		}if (num == 0) {
			return;
		}
	}
	if (figure == 2) {
		printf("Введите две стороны прямоугольного треугольника: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("Выберете:\n 1. Найти площадь треугольника\n 2. Найти периметр треугольника\n 3. Вернуться к выбору фигур\n 0. Выход\n");
		scanf_s("%d", &num);
		if (num == 1) {
			S = a * b * 0.5;
			printf("Площадь треугольника = %f", S);
		}if (num == 2) {
			P = (sqrt(a * a + b * b) + a + b);
			printf("Периметр треугольника = %d", P);
		}if (num == 4) {
			system("cls");
			goto link1;
		}if (num == 0) {
			return;
		}
	}
	if (figure == 3) {
		printf("Введите две стороны прямоугольника: ");
		scanf_s("%d %d", &a, &b);
		system("cls");
		printf("Выберете:\n 1.Найти площадь прямоугольника \n 2. Найти периметр прямоугольника\n 3. Найти диагональ прямоугольника\n 4. Вернуться к выбору фигруры\n 0. Выход\n");
		scanf_s("%d", &num);
		if (num == 1) {
			S = a * b;
			printf("Площадь прямоугольника = %f ", S);
		}if (num == 2) {
			P = (a + b) * 2;
			printf(" Периметр прямоугольника = %d", P);
		}if (num == 3) {
				diagonal = sqrt(a * a + b * b);
				printf("Диагональ прямоугольника = %f", diagonal);
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