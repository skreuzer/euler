#include <stdio.h>

#include "euler.h"

#define PROBLEM 7
#define ANSWER 104743

int
main(int argc, char **argv)
{
    int number = 0, found = 0;

    do {
        number++;
        if(is_prime(number)) {
            found++;
        }
    } while(found < 10001);
    return check(PROBLEM, ANSWER, number);
}
