// write a function swap1() which will perform swapping two integer values using call by value and another function swap2() which will perform swapping of two integer values by call by address . Show the difference of both the cases 

#include <stdio.h>

// Function to swap two integers using call by value
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using call by address
void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    // Call swap1 using call by value
    printf("Before swap1 - Call by value: num1 = %d, num2 = %d\n", num1, num2);
    swap1(num1, num2);
    printf("After swap1 - Call by value: num1 = %d, num2 = %d\n\n", num1, num2);

    // Reset values
    num1 = 5;
    num2 = 10;

    // Call swap2 using call by address
    printf("Before swap2 - Call by address: num1 = %d, num2 = %d\n", num1, num2);
    swap2(&num1, &num2);
    printf("After swap2 - Call by address: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
