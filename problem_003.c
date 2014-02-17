/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#include "euler.h"

#define PROBLEM 3
#define ANSWER 6857

int
main(int argc, char **argv)
{
    long long int num = 600851475143;
    int x;
    for(x = 2; x < num; x++) {
        if(num % x == 0) {
            num /= x;
            x--;
        }
    }
    return check(PROBLEM, ANSWER, x);
}
