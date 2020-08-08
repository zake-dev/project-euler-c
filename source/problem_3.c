#define TARGET_NUMBER 600851475143

#include <stdio.h>

/*
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

int main() 
{
    // Set initial factor as 2
    int factor = 2;
    long long int number = TARGET_NUMBER;

    // Divide the given number until it cannot be divided by any prime factor but itself.
    while (number >= factor * factor)
    {
        if (number % factor == 0)
            number /= factor;
        else ++factor;
    }

    printf("Largest prime factor of %I64d is, %I64d\n", TARGET_NUMBER, number);

    return 0;
}

/* Result
Largest prime factor of 600851475143 is, 6857
*/