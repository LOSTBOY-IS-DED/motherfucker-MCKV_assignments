// write a program to find a key value from the integer array 

#include <stdio.h>

// Function to search for a key in an array
int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Call the search function
    int index = search(arr, size, key);

    // Display the result
    if (index != -1) {
        printf("Key %d found at index %d\n", key, index);
    } else {
        printf("Key %d not found in the array\n", key);
    }

    return 0;
}
