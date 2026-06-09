#include <iostream>
using namespace std;

class ElectricityBill {
public:
    string customerName;
    float units, fixedCharge, totalAmount;

    void getData() {
        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Units Consumed: ";
        cin >> units;

        cout << "Enter Fixed Charge: ";
        cin >> fixedCharge;
    }

    void calculateBill() {
        float ratePerUnit = 8.0;
        totalAmount = (units * ratePerUnit) + fixedCharge;
    }

    void displayBill() {
        cout << "\n===== ELECTRICITY BILL =====" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Fixed Charge  : " << fixedCharge << endl;
        cout << "Total Amount  : " << totalAmount << endl;
    }
};

int main() {
    ElectricityBill e;

    e.getData();
    e.calculateBill();
    e.displayBill();

    return 0;
}