/*
6.	Write a program to read an integer number
    and print the reverse of that 
    number using recursion.
*/
#include <stdio.h>

// Recursive function to reverse a number
int reverse_number(int n, int rev) {
    if (n == 0) {
        return rev; // Base case: when the number is 0, return the reversed number
    }
    rev = rev * 10 + (n % 10); // Add the last digit of n to rev
    return reverse_number(n / 10, rev); // Recursive call with the remaining digits
}

int main() {
    int number, reversed;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle negative numbers
    int is_negative = 0;
    if (number < 0) {
        is_negative = 1;
        number = -number; // Convert to positive for processing
    }

    // Call the recursive function to reverse the number
    reversed = reverse_number(number, 0);

    // If the original number was negative, make the reversed number negative
    if (is_negative) {
        reversed = -reversed;
    }

    // Display the reversed number
    printf("The reversed number is: %d\n", reversed);

    return 0;
}
