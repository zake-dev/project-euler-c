/*******************************************************************************
Author: Zake Jeonghwan Lee
Date: 11/08/2020

Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see 
that the 6th prime is 13.

What is the 10 001st prime number?
*******************************************************************************/

#include <stdio.h>  /* printf */
#include <stdlib.h> /* calloc, free */

#define ARRAY_SIZE 1000001  /* constant - size of array */
#define TARGET_NUMBER 10001 /* constant - target number */

int *sieveOfEratosthenes(int *);

/*******************************************************************************
main
*******************************************************************************/
int main()
{
    int *initialArray = calloc(ARRAY_SIZE, sizeof(int));
    for (int i = 2; i <= ARRAY_SIZE; ++i)
        initialArray[i] = i;

    int *primes = sieveOfEratosthenes(initialArray);

    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        if (primes[i])
            ++count;
        if (count == TARGET_NUMBER)
        {
            printf("\n%dth prime number is, %d\n", TARGET_NUMBER, primes[i]);
            break;
        }
    }

    free(primes);
    return 0;
}

/*******************************************************************************
sieveOfEratosthenes
This function filters non-prime numbers inside the given array
inputs:
- numbers: int array
outputs:
- none
*******************************************************************************/
int *sieveOfEratosthenes(int *numbers)
{
    int p = 2;
    while ((p * p) <= ARRAY_SIZE)
    {
        if (numbers[p] != 0)
            for (int j = 2; j < ARRAY_SIZE; ++j)
            {
                if (p * j > ARRAY_SIZE)
                    break;
                numbers[p * j] = 0;
            }
        ++p;
    }

    return numbers;
}

/*******************************************************************************
Result

10001th prime number is, 104743
*******************************************************************************/