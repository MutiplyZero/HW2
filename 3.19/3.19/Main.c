#include <stdio.h>
int main(){
float principal, rate ,interest;
int days;
printf("Enter loan pricipal(-1 to end):");
scanf_s("%f",&principal);
while (principal != -1) {
	printf("Enter interest rate:");
	scanf_s("%f", &rate);
	printf("Enter term of the loan in days:");
	scanf_s("%d", &days);
	interest = principal * rate * days / 365;
	printf("The interest charge is $%.2f\n", interest);
	printf("Enter loan pricipal(-1 to end):");
	scanf_s("%f", &principal);
}
return 0;
}