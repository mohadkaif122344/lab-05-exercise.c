/*
8.	Write a C program to check whether a 
    number is even or odd using functions.
*/
#include <stdio.h>

// Function to check if a number is even or odd
const char* check_even_odd(int num) {
    if (num % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to check if the number is even or odd
    const char* result = check_even_odd(number);

    // Display the result
    printf("The number %d is %s.\n", number, result);

    return 0;
}
