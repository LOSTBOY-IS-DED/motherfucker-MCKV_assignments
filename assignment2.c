// declare a integer variable a , float b , char c , double d , . Input the values, print value, address and sizes of a, b, c, d.

#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    double d;

    // Input values for variables
    printf("Enter an integer value for 'a': ");
    scanf("%d", &a);

    printf("Enter a float value for 'b': ");
    scanf("%f", &b);

    printf("Enter a character value for 'c': ");
    scanf(" %c", &c);

    printf("Enter a double value for 'd': ");
    scanf("%lf", &d);

    // Print values, addresses, and sizes
    printf("\nValues and Addresses:\n");
    printf("a: Value = %d, Address = %p, Size = %lu bytes\n", a, (void*)&a, sizeof(a));
    printf("b: Value = %f, Address = %p, Size = %lu bytes\n", b, (void*)&b, sizeof(b));
    printf("c: Value = %c, Address = %p, Size = %lu bytes\n", c, (void*)&c, sizeof(c));
    printf("d: Value = %lf, Address = %p, Size = %lu bytes\n", d, (void*)&d, sizeof(d));

    return 0;
}

