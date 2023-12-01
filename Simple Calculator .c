#include <stdio.h>

// Function declarations
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {
    char operation;
    double num1, num2;

    // Input the operation and numbers
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            printf("Result: %.2lf\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2lf\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2lf\n", divide(num1, num2));
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

