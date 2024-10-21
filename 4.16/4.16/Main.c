#include <stdio.h>
int main() {
	int i, j, k, rows = 10;
	printf("(A)\n");
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n(B)\n");
	for (i = rows; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n(C)\n");
	for (i = rows; i >= 1; i--) {
		for (k = 0; k < rows - i; k++) {
			printf(" ");
		}
			for (j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}

		printf("\n(D)\n");
		for (i = 1; i <= rows; i++) {
			for (k = rows - i; k > 0; k--) {
				printf(" ");
			}
				for (j = 1; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			return 0;

		}
