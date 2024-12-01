/*
9.	Write a C program to check whether a number is prime,
     Armstrong or perfect number using functions.
*/
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to check if a number is an Armstrong number
int is_armstrong(int num) {
    int sum = 0, original_num = num, remainder, digits = 0;

    // Calculate the number of digits in the number
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = original_num;
    // Check if the sum of each digit raised to the power of the number of digits is equal to the number
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }

    if (sum == original_num) {
        return 1; // Armstrong number
    }
    return 0; // Not an Armstrong number
}

// Function to check if a number is a perfect number
int is_perfect(int num) {
    int sum = 0;
    
    // Find the divisors of the number and calculate the sum of the divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        return 1; // Perfect number
    }
    return 0; // Not a perfect number
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime, Armstrong, or perfect
    if (is_prime(number)) {
        printf("%d is a Prime number.\n", number);
    } else {
        printf("%d is not a Prime number.\n", number);
    }

    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (is_perfect(number)) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
