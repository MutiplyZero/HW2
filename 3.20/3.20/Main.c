#include <stdio.h>
int main() {
	int hours;
	float rate, salary;
	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%d", &hours);
	while (hours != -1) {
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hours > 40) {
			salary = (40 * rate) + ((hours - 40) * 1.5 * rate);
		}
		else {
			salary = hours * rate;
		}
		printf("Salary = $%.2f\n", salary);
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
	}
	return 0;

	}

