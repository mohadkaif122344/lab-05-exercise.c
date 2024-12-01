/*
4.	Write a program to swap two integers 
    using call by value and call by reference
     methods of passing arguments to a function.
*/
#include <stdio.h>

// Function to swap two integers using call by value
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}

// Function to swap two integers using call by reference
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);

    // Demonstrate call by value
    printf("\nBefore swap_by_value: x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("After swap_by_value: x = %d, y = %d (No change outside the function)\n", x, y);

    // Demonstrate call by reference
    printf("\nBefore swap_by_reference: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swap_by_reference: x = %d, y = %d (Values swapped)\n", x, y);

    return 0;
}
