// write a program to show fibbonacci series by recursion upto n terms 

#include <stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the number of terms from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Display the Fibonacci series up to n terms
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

