// write a progeram to show the abbreviation of a person name 

#include <stdio.h>

int main() {
    char fullName[100];

    // Input the full name from the user
    printf("Enter full name: ");
    scanf("%[^\n]s", fullName); // Read the entire line, including spaces

    // Display the abbreviation
    printf("Abbreviation: ");

    // Print the first character of the first word
    printf("%c", fullName[0]);

    // Iterate through the name to find spaces and print the next character after each space
    for (int i = 0; fullName[i] != '\0'; i++) {
        if (fullName[i] == ' ' && fullName[i + 1] != '\0') {
            printf(".%c", fullName[i + 1]);
        }
    }

    printf("\n");

    return 0;
}
