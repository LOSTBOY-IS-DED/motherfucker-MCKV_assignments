// write a program to show a striing whether it is a palindrome or not with and without using string library function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Using string library functions to check if the string is a palindrome
    int length = strlen(str);
    int i, j;
    int isPalindrome = 1;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
