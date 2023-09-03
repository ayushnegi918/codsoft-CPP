#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "\n\nEnter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nEnter operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "\nError: Cannot divide by zero.\n" << endl;
                return 1; 
            }
            break;
        default:
            cout << "\nInvalid operation." << endl;
            return 1; 
    }

    cout << "\nResult: " << result << endl <<endl;

    return 0; 
}