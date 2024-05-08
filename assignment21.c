// write a program to calculate GCD of two numbers using recursion .

#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the gcd function and display the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
