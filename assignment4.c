// write a program to calculate maturity amount without using any third variable

#include <stdio.h>
#include <math.h>

int main() {
    float PrincipleAmount , rate , time , interest , MaturityAmount;

    // Input principal amount, rate of interest, and time
    printf("Enter principal amount (P): ");
    scanf("%f", &PrincipleAmount);

    printf("Enter rate of interest (r): ");
    scanf("%f", &rate);

    printf("Enter time in years (n): ");
    scanf("%f", &time);

    // Calculate the value 
    interest=(PrincipleAmount*rate*time)/100;
    MaturityAmount = PrincipleAmount+interest;

    // Display the result
    printf("MaturityAmount: %.2f\n", MaturityAmount);

    return 0;
}