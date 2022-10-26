#include <stdio.h>
#include<math.h>
#include<locale.h>

void main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("¬ведите x y z: ");
	scanf_s("%d %d %d", &x, &y, &z);
	if (x != y && y != z && z != x) {
		
		if (x > y && x > z) {
			z += x;
		}else if (y > x && y > z) {
			z += y;
		}else {
			z *= z;
		}
		printf("z = %d\n", z);
	}else {
		if (x == y && y == z) {
			printf("they r equal!\n");
		}else {
			if (x == y) {
				printf("%d = %d\n", x, y);
			}else if (y == z) {
				printf("%d = %d\n", y, z);
			}else {
				printf("%d = %d\n", x, z);
			}
		}
	}
	return;

}