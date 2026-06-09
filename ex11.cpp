#include <stdio.h>

float deposit(float balance) {
    float amount;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if(amount > 0) {
        balance += amount;
        printf("Deposit Successful!\n");
    } else {
        printf("Amount should be greater than 0.\n");
    }

    return balance;
}


float withdraw(float balance) {
    float amount;

    printf("Enter withdraw amount: ");
    scanf("%f", &amount);

    if(amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal Successful!\n");
    } else {
        printf("Insufficient Balance or Invalid Amount!\n");
    }

    return balance;
}


void checkBalance(float balance) {
    printf("Current Balance: %.2f\n", balance);
}

int main() {
    float balance = 1000;
    int choice;

    do {
        printf("\n===== BANK SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                balance = deposit(balance);
                break;

            case 2:
                balance = withdraw(balance);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}