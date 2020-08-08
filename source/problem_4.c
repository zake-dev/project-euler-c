#include <stdio.h>
#include <stdbool.h> // bool type support

/*
Problem 4
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool is_palindromic_number(int);

int main()
{
    int largest_palindromic_number = 0;
    for (int i = 999; i >= 100; --i)
        for (int j = i - 1; j >= 100; --j)
        {
            int product = i * j;
            if (is_palindromic_number(product))
                largest_palindromic_number = product > largest_palindromic_number ? product : largest_palindromic_number;
        }

    printf("%d is the largest palindromic number of two 3-digit numbers.\n", largest_palindromic_number);
    return 0;
}

bool is_palindromic_number(int number)
{
    int original_number = number, reversed_number = 0;

    while (number != 0)
    {
        int remainder = number % 10;
        number /= 10;
        reversed_number = reversed_number * 10 + remainder;
    }
    return original_number == reversed_number;
}

/* Result
906609 is the largest palindromic number of two 3-digit numbers.
*/