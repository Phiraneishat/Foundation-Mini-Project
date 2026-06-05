#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;

    s1.getData();
    s1.showData();

    return 0;
}