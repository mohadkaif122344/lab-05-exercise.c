/*
5.	Write a program to find sum of digits
    of the number using Recursive Function.
*/
#include <stdio.h>

// Recursive function to calculate the sum of digits of a number
int sum_of_digits(int n) {
    if (n == 0) {
        return 0; // Base case: if the number is 0, the sum of digits is 0
    }
    return (n % 10) + sum_of_digits(n / 10); // Recursive case
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        number = -number; // Convert to positive
    }

    // Calculate sum of digits
    int result = sum_of_digits(number);

    // Display the result
    printf("The sum of the digits of %d is: %d\n", number, result);

    return 0;
}
