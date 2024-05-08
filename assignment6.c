// input threee number from the user and find the maximum and minimun of them using conditional operator.

#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum using conditional operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    // Here, the conditional (ternary) operator ? : is used to find the maximum of the three numbers. The expression (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3) checks if num1 is greater than num2. If true, it further checks if num1 is greater than num3 and assigns num1 if true; otherwise, it assigns num3. If the initial condition is false, it checks if num2 is greater than num3 and assigns num2 if true; otherwise, it assigns num3. The result is stored in the variable max.

    // Find the minimum using conditional operator
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);


    // Display the maximum and minimum
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
