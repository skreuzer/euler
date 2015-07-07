/*
 * Multiples of 3 and 5
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000
 */

#include <stdio.h>
#include <euler.h>

#define PROBLEM 1
#define ANSWER 233168

int
main(void)
{
    int sum = 0, i = 3;
    while (i < 1000) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
        i++;
    }
    return check(PROBLEM, ANSWER, sum);
}
