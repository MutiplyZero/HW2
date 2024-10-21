#include <stdio.h>
int main() {
	float sales, salary;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &sales);
		while (sales != -1) {
			salary = (sales * 0.09) + 200;
			printf("Salary is : $%.2f\n", salary);
			printf("Enter sales in dollars (-1 to the end):");
			scanf_s("%f", &sales);
		}
		return 0;
}