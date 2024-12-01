/*
1.	Write a program to add, subtract,
    multiply and divide two integers using 
    user- defined type function with return type.
*/
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two integers
float divide(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0; // Return 0 to indicate an error
    }
    return (float)a / b;
}

// Main program
int main() {
    int num1, num2;
    int addition, subtraction, multiplication;
    float division;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform operations using functions
    addition = add(num1, num2);
    subtraction = subtract(num1, num2);
    multiplication = multiply(num1, num2);
    division = divide(num1, num2);

    // Display results
    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);

    // Check if division was valid before displaying
    if (num2 != 0) {
        printf("Division: %.2f\n", division);
    }

    return 0;
}
