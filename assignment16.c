// Calculate the frequency of the vowels (a,e,i,o,u) in the statement given by the user 

#include <stdio.h>

int main() {
    char statement[1000];
    int i, vowels[5] = {0}; // Array to store the frequency of each vowel

    // Input a statement from the user
    printf("Enter a statement: ");
    fgets(statement, sizeof(statement), stdin);

    // Calculate the frequency of each vowel
    for (i = 0; statement[i] != '\0'; ++i) {
        if (statement[i] == 'a' || statement[i] == 'A')
            ++vowels[0];
        else if (statement[i] == 'e' || statement[i] == 'E')
            ++vowels[1];
        else if (statement[i] == 'i' || statement[i] == 'I')
            ++vowels[2];
        else if (statement[i] == 'o' || statement[i] == 'O')
            ++vowels[3];
        else if (statement[i] == 'u' || statement[i] == 'U')
            ++vowels[4];
    }

    // Display the frequency of each vowel
    printf("Frequency of vowels:\n");
    printf("a/A: %d\n", vowels[0]);
    printf("e/E: %d\n", vowels[1]);
    printf("i/I: %d\n", vowels[2]);
    printf("o/O: %d\n", vowels[3]);
    printf("u/U: %d\n", vowels[4]);

    return 0;
}
