#include <stdio.h>

int main()
{
    // This program reads no input. It simply returns the sum of the integers
    // between 1 and 10.

    int sum = 0; // Initialize the sum to 0
    int i; // The loop variable

    for (i = 1; i <= 10; i++) {
        sum = sum + i; // update the sum
    }
    /*
    for (initialization; loop condition; increment)
    ...some code here...

    i++ is the same as i = i +1 and i += 1
    
    */
    printf("%d\n", sum); // print the sum

    /*
    Nested Loops
    */
    // This program finds all prime numbers from 1 to 20
    int divisors;
    int x;

    // Loop through the value of x from 1 to 20
    for (x = 1; x <= 20; x++) {
        // Find out how many divisors for the number x
        divisors = 0;
        for (i = 1; i < x; i++) {
            if (x % i == 0) {
                divisors++;
            }
        }

        // The number is a prime number if there is only one divisor
        if (divisors == 1) {
            printf("%2d is a prime number.\n", x);
        }
    }
}