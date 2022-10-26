#include<stdio.h>
#include<locale.h>
#include<malloc.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int amountOfSimbols(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			result++;
		}
	}
	return result;
}
int amountOfLowercase(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (!(isupper(str[i])) && str[i] != ' ') {
			result++;
		}
	}
	return result;
}
int amountOfUppercase(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			result++;
		}
	}
	return result;
}
int amountOfWords(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len - 2; i++) {
		if ((str[i] != ' ') && (str[i + 1] == ' ') && (str[i + 2] != ' ')) {
			result++;
		}
	}
	return ++result;
}
int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	str = (char*)malloc(sizeof(char*) * 100);
	gets(str);

	puts(str);
	printf("Количество значимых знаков %d\n", amountOfSimbols(str));
	printf("Количество содержащихся а ней строчных букв %d\n", amountOfLowercase(str));
	printf("Количество содержащихся в ней заглавных букв %d\n", amountOfUppercase(str));
	printf("Количесвто слов %d\n", amountOfWords(str));
	system("pause");
	return 0;
}