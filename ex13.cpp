#include <stdio.h>

struct ElectricityBill {
    char customerName[50];
    float units;
    float fixedCharge;
    float totalAmount;
};

float calculateBill(float units, float fixedCharge) {
    return (units * 8.0) + fixedCharge;
}

struct ElectricityBill getData(struct ElectricityBill e) {
    printf("Enter Customer Name: ");
    scanf("%s", e.customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &e.units);

    printf("Enter Fixed Charge: ");
    scanf("%f", &e.fixedCharge);

    return e;
}

struct ElectricityBill generateBill(struct ElectricityBill e) {
    e.totalAmount = calculateBill(e.units, e.fixedCharge);
    printf("Bill Generated Successfully!\n");
    return e;
}

void displayBill(struct ElectricityBill e) {
    printf("\n===== ELECTRICITY BILL =====\n");
    printf("Customer Name : %s\n", e.customerName);
    printf("Units         : %.2f\n", e.units);
    printf("Fixed Charge  : %.2f\n", e.fixedCharge);
    printf("Total Amount  : %.2f\n", e.totalAmount);
}

int main() {
    struct ElectricityBill e;
    int choice;

    do {
        printf("\n===== ELECTRICITY BILL SYSTEM =====\n");
        printf("1. Enter Customer Details\n");
        printf("2. Generate Bill\n");
        printf("3. Display Bill\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                e = getData(e);
                break;

            case 2:
                e = generateBill(e);
                break;

            case 3:
                displayBill(e);
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