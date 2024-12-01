/*
10.	Write a C program to find power 
    of any number using recursion.
 */
#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number raised to the power of 0 is 1
    }
    return base * power(base, exponent - 1); // Recursive case: base^exponent = base * base^(exponent-1)
}

int main() {
    int base, exponent, result;

    // Input the base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using recursion
    result = power(base, exponent);

    // Display the result
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}
