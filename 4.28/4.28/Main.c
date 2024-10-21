#include <stdio.h>

int main() {
    int employeeCode;
    double weeklyPay, hoursWorked, hourlyRate, sales, itemProduced, ratePerItem;
    printf("Enter employee code (-1 to end): ");
    scanf_s("%d", &employeeCode);
    while (employeeCode != -1) {
        switch (employeeCode) {
        case 1:
            printf("Enter weekly salary: ");
            scanf_s("%lf", &weeklyPay);
            printf("Manager's pay is $%.2f\n", weeklyPay);
            break;

        case 2:
            printf("Enter hourly rate: ");
            scanf_s("%lf", &hourlyRate);
            printf("Enter hours worked: ");
            scanf_s("%lf", &hoursWorked);

            if (hoursWorked <= 40) {
                weeklyPay = hoursWorked * hourlyRate;
            }
            else {
                weeklyPay = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
            }
            printf("Hourly worker's pay is $%.2f\n", weeklyPay);
            break;

        case 3:
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &sales);
            weeklyPay = 250 + 0.057 * sales;
            printf("Commission worker's pay is $%.2f\n", weeklyPay);
            break;

        case 4:
            printf("Enter number of items produced: ");
            scanf_s("%lf", &itemProduced);
            printf("Enter rate per item: ");
            scanf_s("%lf", &ratePerItem);
            weeklyPay = itemProduced * ratePerItem;
            printf("Pieceworker's pay is $%.2f\n", weeklyPay);
            break;

        default:
            printf("Invalid employee code.\n");
            break;
        }
        printf("\nEnter employee code (-1 to end): ");
        scanf_s("%d", &employeeCode);
    }

    return 0;
}