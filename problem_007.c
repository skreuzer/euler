#include <stdio.h>

#include "euler.h"

#define PROBLEM 7
#define ANSWER 104743

int
is_prime(int num)
{
    if(num < 2) {
        return 0;
    } else if(num == 2) {
        return 1;
    }

    for(int y = 2; y < num; y++) {
        if(num % y == 0) {
            return 0;
        }
    }
    return 1;
}

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
