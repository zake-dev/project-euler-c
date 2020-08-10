/*******************************************************************************
Author: Zake Jeonghwan Lee
Date: 10/08/2020

Problem 6
The sum of the squares of the first ten natural numbers is, 385.
The square of the sum of the first ten natural numbers is, 3025

Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is 2640.

Find the difference between the sum of the squares of the first one hundred 
natural numbers and the square of the sum.
*******************************************************************************/

#include <stdio.h> /* printf */

int naturalSum(int);
int naturalSquaredSum(int);

/*******************************************************************************
main
*******************************************************************************/
int main()
{
    int sumToHundred = naturalSum(100),
        squareSumToHundred = naturalSquaredSum(100);

    printf("\ndifference between the sum of the squares of the first one hundred");
    printf("\nnatural numbers and the square of the sum is,");
    printf("\n\n%d", (sumToHundred * sumToHundred) - squareSumToHundred);

    return 0;
}

/*******************************************************************************
naturalSum
This function calculates and returns a sum of 1 to the given number
inputs:
- n: positive integer number
outputs:
- sum of 1 to the given number
*******************************************************************************/
int naturalSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += i;
    return sum;
}

/*******************************************************************************
naturalSquaredSum
This function calculates and returns a sum of squares between 1 and the given number
inputs:
- n: positive integer number
outputs:
- sum of squares between 1 and the given number
*******************************************************************************/
int naturalSquaredSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += (i * i);
    return sum;
}

/*******************************************************************************
Result

difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum is,

25164150
*******************************************************************************/