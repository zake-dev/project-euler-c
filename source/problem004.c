/*******************************************************************************
Author: Zake Jeonghwan Lee
Date: 08/08/2020

Problem 4
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*******************************************************************************/

#include <stdio.h> /* printf */
#include <stdbool.h> /* bool type support */

bool isPalindromicNumber(int);

/*******************************************************************************
main
*******************************************************************************/
int main()
{
    int largestPalindromicNumber = 0;
    for (int i = 999; i >= 100; --i)
        for (int j = i - 1; j >= 100; --j)
        {
            int product = i * j;
            if (isPalindromicNumber(product) && product > largestPalindromicNumber)
                largestPalindromicNumber = product;
        }

    printf("\n%d is the largest palindromic number of two 3-digit numbers.\n", largestPalindromicNumber);
    return 0;
}

/*******************************************************************************
isPalindromicNumber
This function compares and returns whether the given number is a palindrome
inputs:
- number: positive integer number
outputs:
- boolean value whether the given number is a palindrome
*******************************************************************************/
bool isPalindromicNumber(int number)
{
    int originalNumber = number, reversedNumber = 0;

    while (number != 0)
    {
        int remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return originalNumber == reversedNumber;
}

/*******************************************************************************
Result

906609 is the largest palindromic number of two 3-digit numbers.
*******************************************************************************/