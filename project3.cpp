#include <iostream>
using namespace std;

float bookTicket(float amount) {
    int ticketCount;

    cout << "Enter Number of Tickets: ";
    cin >> ticketCount;

    amount = ticketCount * 200;

    cout << "Ticket Booked Successfully!" << endl;
    cout << "Total Amount: " << amount << endl;

    return amount;
}

float changeTicket(float amount) {
    int ticketCount;

    cout << "Enter New Number of Tickets: ";
    cin >> ticketCount;

    amount = ticketCount * 200;

    cout << "Ticket Changed Successfully!" << endl;
    cout << "Updated Amount: " << amount << endl;

    return amount;
}

void payment(float amount) {
    cout << "Payment Amount: " << amount << endl;
}

int main() {
    string name;
    int age;
    long long aadhar;
    int choice;
    float amount = 0;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Aadhar Number: ";
    cin >> aadhar;

    if (aadhar < 100000000000LL) {
        cout << "Aadhar Verification Failed!" << endl;
        return 0;
    }

    cout << "Aadhar Verified Successfully!" << endl;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. Change Ticket" << endl;
        cout << "3. Payment Details" << endl;
        cout << "4. Cancel Ticket" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                amount = bookTicket(amount);
                break;

            case 2:
                amount = changeTicket(amount);
                break;

            case 3:
                payment(amount);
                break;

            case 4:
                amount = 0;
                cout << "Ticket Cancelled Successfully!" << endl;
                break;

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}