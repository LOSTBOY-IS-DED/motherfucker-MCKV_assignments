// generate the following pattern ...

// 1)   *      2)  abcde
//     ***          fgh
//    *****          i

#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {

        // Loop to print spaces
        for (space = i; space < rows; space++) {
            printf(" ");
        }

        // Loop to print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'a';

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {

        // Loop to print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Loop to print characters
        for (j = 1; j <= (rows - i + 1); j++) {
            printf("%c", ch);
            ch++;
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
