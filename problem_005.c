/*
 * 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 *
 */

#include <stdio.h>
#include "euler.h"

#define PROBLEM 5
#define ANSWER 232792560

int even_div(int num)
{
    int x;
    for(x = 1; x <= 20; x++) {
        if(num % x != 0) {
            return 0;
        }
    }
    return 1;
}

int
main(int argc, char **argv)
{
    int x = 0, done = 0;
    while(!done) {
        x++;
        if(even_div(x) == 1) {
            done = 1;
        }
    }
    return check(PROBLEM, ANSWER, x);
}
