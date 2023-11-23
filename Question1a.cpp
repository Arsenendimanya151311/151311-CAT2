#include <iostream>
using namespace std;

int main() {
    // Declare variables to store three numbers
    double num1, num2, num3;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Use switch case to determine the smallest number
    switch(1) {
        case 1:
            if (num1 <= num2 && num1 <= num3) {
                cout << "The smallest number is: " << num1 << endl;
            } else if (num2 <= num1 && num2 <= num3) {
                cout << "The smallest number is: " << num2 << endl;
            } else {
                cout << "The smallest number is: " << num3 << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
