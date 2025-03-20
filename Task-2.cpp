// Task 2: Calculator Program

// Write a program that takes two
//  numbers and an operator as input
//  (+, -, *, /, %) and performs the
//  corresponding arithmetic operation.
//  Display the result on the console

#include <iostream>

using namespace std;

double calc(int x, int y, const string &op) {
    if (op == "+") return x + y;
    if (op == "-") return x - y;
    if (op == "*") return x * y;
    if (op == "/") {
        if (y == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        return static_cast<double>(x) / y;
    }
    if (op == "%") {
        if (y == 0) {
            cout << "Error: Modulus by zero is not allowed.\n";
            return 0;
        }
        return x % y;
    }
    
    cout << "Error: Invalid operator.\n";
    return 0;
}

int main() {
    int num1, num2;
    string operation;
    string done = "All Done";

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    double result = calc(num1, num2, operation);
    cout << "Result: " << result << '\n';
    cin >> done;
    
    return 0;
}
