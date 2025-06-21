#include <stdio.h>

int isPalindrome(int arr[], int n) {

    // Start from the beginning and end of the array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    int arr[] = {1, 2, 3, 3, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Check if the array is a palindrome
    if (isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
