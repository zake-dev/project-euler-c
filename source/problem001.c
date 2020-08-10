/*******************************************************************************
Author: Zake Jeonghwan Lee
Date: 08/08/2020

Problem 1 
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*******************************************************************************/

#include <stdio.h> /* printf */

#define STARTING_NUMBER 1
#define TARGET_NUMBER 1000
#define FACTOR_NUMBER_1 3
#define FACTOR_NUMBER_2 5

/*******************************************************************************
main
*******************************************************************************/
int main()
{
    int sum = 0;

    for (int i = STARTING_NUMBER; i < TARGET_NUMBER; ++i)
    {
        if (i % FACTOR_NUMBER_1 == 0)
            sum += i;
        else if (i % FACTOR_NUMBER_2 == 0)
            sum += i;
    }

    printf("\nSum of all multiples of %d and %d below %d is %d\n",
           FACTOR_NUMBER_1, FACTOR_NUMBER_2, TARGET_NUMBER, sum);
}

/*******************************************************************************
Result

Sum of all multiples of 3 and 5 below 1000 is 233168
*******************************************************************************/