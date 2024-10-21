#include <stdio.h>
#include <math.h>
int main() {
	double principal = 5000.0;
	double rate;
	int year, years = 15;
	for (rate = 10.0 ; rate <= 12.0 ; rate += 0.5) {
		printf("\nCalculating for interest rate:%.1f%%\n", rate);
		for (year = 1; year <= years; year++) {
			double amount = principal * pow(1 + rate / 100.0, year);
			printf("Year %d: $%.2f\n", year, amount);
		}
	}
	return 0;
}