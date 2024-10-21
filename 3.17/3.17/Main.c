#include <stdio.h>
int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
    printf("Enter account number (-1 to end): ");
    scanf_s("%d", &accountNumber);
    while (accountNumber != -1) {
        printf("Enter beginning balance: ");
        scanf_s("%lf", &beginningBalance);
        printf("Enter total charges: ");
        scanf_s("%lf", &totalCharges);
        printf("Enter total credits: ");
        scanf_s("%lf", &totalCredits);
        printf("Enter credit limit: ");
        scanf_s("%lf", &creditLimit);
        newBalance = beginningBalance + totalCharges - totalCredits;
        printf("Account:      %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance:      %.2f\n", newBalance);
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }
        printf("\nEnter account number (-1 to end): ");
        scanf_s("%d", &accountNumber);
    }
    return 0;
}
