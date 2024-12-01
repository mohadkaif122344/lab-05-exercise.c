/*
2.	Write a program to calculate sum of 
    first 20 natural numbers using 
    recursive function.
*/
#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sum_of_natural_numbers(int n) {
    if (n == 0) {
        return 0; // Base case: sum of first 0 numbers is 0
    }
    return n + sum_of_natural_numbers(n - 1); // Recursive case
}

int main() {
    int result = sum_of_natural_numbers(20); // Calling the function with 20
    printf("The sum of the first 20 natural numbers is: %d\n", result);
    return 0;
}
