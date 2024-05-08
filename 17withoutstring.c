#include <stdio.h>
#include <stdbool.h>

// Function to check if a string is a palindrome

bool isPalindrome(char str[]) {
    int i = 0, j = 0;

    // Find the length of the string
    while (str[j] != '\0') {
        j++;
    }

    j--;

    // Check for palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
