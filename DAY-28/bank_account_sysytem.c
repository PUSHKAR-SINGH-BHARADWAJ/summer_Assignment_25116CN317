#include <stdio.h>
struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};
int main() {
    struct BankAccount account;
    int choice;
    float amount;
    printf("----- CREATE BANK ACCOUNT -----\n");
    printf("Enter Account Number: ");
    scanf("%d", &account.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);
    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("\n--- ACCOUNT DETAILS ---\n");
                printf("Account Number : %d\n", account.accNo);
                printf("Account Holder : %s\n", account.name);
                printf("Balance : %.2f\n", account.balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                account.balance += amount;
                printf("Amount deposited successfully.\n");
                printf("Updated Balance: %.2f\n", account.balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= account.balance) {
                    account.balance -= amount;
                    printf("Withdrawal successful.\n");
                    printf("Remaining Balance: %.2f\n", account.balance);
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;
            case 4:
                printf("Thank you for using the Bank Account System.\n");
                break;
            default:
        printf("Invalid choice! Please try again.\n");}
    } while(choice != 4);
   return 0;
}