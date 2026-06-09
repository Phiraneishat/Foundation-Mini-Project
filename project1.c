#include <stdio.h>

float balance = 1000;

void deposit() {
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);
    balance += amount;
}

void withdraw() {
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);

    if(amount <= balance)
        balance -= amount;
    else
        printf("Insufficient Balance\n");
}

void checkBalance() {
    printf("Balance = %.2f\n", balance);
}

int main() {
    int choice;

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                deposit(); 
                break;
            case 2: 
                withdraw(); 
                break;
            case 3: 
                checkBalance();
                break;
            case 4: 
                printf("Thank You!\n"); 
                break;
            default: 
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}