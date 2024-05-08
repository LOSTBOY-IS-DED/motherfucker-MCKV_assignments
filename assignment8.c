// write a program to generate a basic calculator which will perform addition, substraction , multiplication and division of two integers...

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int num1, num2, result;
    char operator;

    // Input two integers and operator from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note: there is a space before %c to consume any newline character in the input buffer

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            // Check if the divisor is not zero before performing division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Dont try to use your brain if you dont have one \n");
    }

    return 0;
}
