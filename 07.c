/*
7.	Write a C program to find maximum and 
    minimum between two numbers using
     functions.
*/
#include <stdio.h>

// Function to find the maximum of two numbers
int find_maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int find_minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2, maximum, minimum;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call functions to find maximum and minimum
    maximum = find_maximum(num1, num2);
    minimum = find_minimum(num1, num2);

    // Display the results
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
