#include <iostream>
using namespace std;

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function for division
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    return 0;
}
