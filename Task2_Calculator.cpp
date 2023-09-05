#include <iostream>

using namespace std;

int main() {
    double num1, num2, result ;
    char operation;

    cout<<"\n";
    cout <<"SIMPLE CALCULATOR" << endl;
    cout<<"\n";

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter + for Addition\n";
    cout << "Enter - for Subtraction\n";
    cout << "Enter * for Multiplication\n";
    cout << "Enter / for Division\n";

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } 

        else{
                cout << "ERROR : Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
            break;
    }

    return 0;
}
