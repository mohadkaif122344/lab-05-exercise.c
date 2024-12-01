/*
3.	Write a program to generate Fibonacci 
    series using recursive function.
*/
#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: 1st Fibonacci number is 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Print Fibonacci series
    printf("Fibonacci series:\n");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
