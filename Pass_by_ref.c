#include <stdio.h>
void getNumbers(double *num1, double *num2) {
    printf("Enter first number: ");
    scanf("%lf", num1);
    printf("Enter second number: ");
    scanf("%lf", num2);
}
void add(double n1, double n2, double *result) {
    *result = n1 + n2;
}

void subtract(double n1, double n2, double *result) {
    *result = n1 - n2;
}

void multiply(double n1, double n2, double *result) {
    *result = n1 * n2;
}

void divide(double n1, double n2, double *result) {
    if (n2 != 0) {
        *result = n1 / n2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        *result = 0; 
    }
}

int main() {
    double number1, number2, calculatedResult;
    char operator;

    printf("Simple C Calculator:\n");

    
    printf("Enter first No:");
    scanf("%lf",&number1);
    
    printf("Enter second No:");
    scanf("%lf",&number2);
    
    

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            add(number1, number2, &calculatedResult);
            printf("Result: %.2lf + %.2lf = %.2lf\n", number1, number2, calculatedResult);
            break;
        case '-':
            subtract(number1, number2, &calculatedResult);
            printf("Result: %.2lf - %.2lf = %.2lf\n", number1, number2, calculatedResult);
            break;
        case '*':
            multiply(number1, number2, &calculatedResult);
            printf("Result: %.2lf * %.2lf = %.2lf\n", number1, number2, calculatedResult);
            break;
        case '/':
            divide(number1, number2, &calculatedResult);
            if (number2 != 0) {
                printf("Result: %.2lf / %.2lf = %.2lf\n", number1, number2, calculatedResult);
            }
            break;
        default:
            printf("Invalid operator entered.\n");
            break;
    }

    return 0;
}