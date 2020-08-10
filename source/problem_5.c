/*******************************************************************************
Author: Zake Jeonghwan Lee
Date: 10/08/2020

Problem 5
2520 is the smallest number that can be divided by each of the numbers from 
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the 
numbers from 1 to 20?
*******************************************************************************/

#include <stdio.h> /* printf */

unsigned long long gcd(unsigned long long, unsigned long long);
unsigned long long lcm(unsigned long long, unsigned long long);

/*******************************************************************************
main
*******************************************************************************/
int main()
{
    unsigned long long result = 1;
    for (int i = 2; i <= 20; ++i)
    {
        result = lcm(result, i);
    }

    printf("\nSmallest number that is evenly divisible\n");
    printf("by all of the numbers from 1 to 20:\n\n");
    printf("%I64u\n", result); /* Windows formatter, %llu on Linux */

    return 0;
}


/*******************************************************************************
gcd
This function calculate and return the Greatest Common Divior of a and b
inputs:
- a: positive integer number
- b: positive integer number
outputs:
- Greatest Common Divior of a and b
*******************************************************************************/
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

/*******************************************************************************
lcm
This function calculate and return the Lowest Common Multiple of a and b
inputs:
- a: positive integer number
- b: positive integer number
outputs:
- Lowest Common Multiple of a and b
*******************************************************************************/
unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    return a * b / gcd(a, b);
}

/*******************************************************************************
Result
*******************************************************************************/