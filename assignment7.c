// write a program to show the real roots of the quadratric equation 

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Input coefficients of the quadratic equation
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the discriminant
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root = %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
